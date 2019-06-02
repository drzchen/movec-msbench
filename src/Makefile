CC := gcc
CCFLAGS := -O3
RM := rm

DIRS := c-syntax  all-mem-err
HEADERS := $(wildcard *.h $(patsubst %, %/*.h, $(DIRS)))
SOURCES := $(wildcard *.c $(patsubst %, %/*.c, $(DIRS)))
HEADERS := $(sort $(HEADERS))
SOURCES := $(sort $(SOURCES))
SOURCES_ERROR := 

OBJS  := $(patsubst %.c, %.o, $(SOURCES))
DEPS  := $(patsubst %.c, %.d, $(SOURCES))
PROGS := $(patsubst %.c, %, $(SOURCES))
RUN_PROGS := $(patsubst %.c, run_%, $(SOURCES))
OUTPUTS   := $(patsubst %.c, %.output, $(SOURCES))

.PHONY: all  build  run  $(RUN_PROGS)  clean
#Ignore the runs that will cause errors.
.IGNORE: $(patsubst %.c, run_%, $(SOURCES_ERROR))
#Cancel implicit rules.
.SUFFIXES: 

all: run

build: $(PROGS)
	@echo "***Successfully built all programs."

$(PROGS): %: %.c
	@echo "Building" $@
	@$(CC) $(CCFLAGS) $< -o $@

run: $(RUN_PROGS)
	@echo "***Successfully ran all programs."

$(RUN_PROGS): run_% : %
	@echo "Running" $<
	@./$< > ./$<.output

clean:
	@$(RM) -f $(OUTPUTS) $(PROGS) $(DEPS) $(OBJS)
