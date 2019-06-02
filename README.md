# Movec-MSBench: A Memory Safety Benchmark Suite (Version 1.0.0)
    Copyright (C) 2019 Zhe Chen

## Introduction

This benchmark suite contains a set of programs for evaluating the tools
detecting memory errors. Each unsafe program contains a clearly marked error,
while each safe program that has a suffix "*.s.c" contains no error.

The benchmark programs are classified into the following categories.

1. Effectiveness tests (i.e., soundness and completeness) (all-mem-err)
   aim to check whether a tool supports various types of memory errors.
   (1) Invalid pointer value errors:
       null, uninitialized or manufactured pointers.
   (2) Spatial errors:
       buffer overflows, out-of-bounds memory accesses, non-base frees.
       * object level: in global, static, stack, heap.
       * sub-object level: in global, static, stack, heap.
       * long-jump overflows.
   (3) Temporal errors:
       use-after-free (stack, heap), double frees.
   (4) Memory leaks.
   (5) Segment errors:
       invalid dereferences, invalid frees.

   Special concerns:
   (S1) Read and write errors.
   (S2) Soundness and completeness: false positives and negatives.
   (S3) Errors in library: non-variadic and variadic functions.

2. C syntax tests (c-syntax)
   aim to check whether a tool supports diverse C syntax constructs.
   (1) Types that may include pointers:
       pointers, structures, pointer arrays, structure arrays.
   (2) Values that may include pointers:
       variables (global, static, stack, heap), constants,
       function calls (including va_arg() calls), conditional expressions.
   (3) Definitions and assignments of variables.
   (4) Dereferences of pointers:
       dereferences, array subscripts, member expressions.
   (5) Function calls:
       non-variadic functions, variadic functions, calls by function pointers,
       va_arg() calls, conditional expressions.

## References
To cite this benchmark suite, please use the following reference,
where it is first used to evaluate related tools for ensuring memory safety.

[1] Zhe Chen, Junqi Yan, Shuanglong Kan, Ju Qian, and Jingling Xue,
Detecting Memory Errors at Runtime with Source-Level Instrumentation,
Proceedings of the 28th ACM SIGSOFT International Symposium on Software
Testing and Analysis (ISSTA '19), July 15-19, 2019, Beijing, China, ACM.
DOI: https://doi.org/10.1145/3293882.3330581
