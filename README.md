Movec-MSBench: A Memory Safety Benchmark Suite
----------------------------------------------

Version 2.0.0

Copyright (C) 2019-2021 Zhe Chen

## 1. Introduction

This benchmark suite contains a set of programs for evaluating the tools
detecting memory errors. Each unsafe program contains a clearly marked error,
while each safe program that has a suffix "-ok.c" contains no error.

The programs in this benchmark suite are classified into the following three
directories: all-mem-err, c-syntax and nptrs.

### 1.1 all-mem-err

The all-mem-err directory contains the effectiveness tests (i.e., for soundness
and completeness) aiming at checking whether a tool can detect various types of
memory errors.

   1. Invalid pointer value errors:
      null, uninitialized or manufactured pointers.
   2. Spatial errors:
      buffer overflows, out-of-bounds memory accesses, non-base frees.
      * object level: in global, static, stack, heap.
      * sub-object level: in global, static, stack, heap.
      * long-jump overflows.
   3. Temporal errors:
      use-after-free (stack, heap), double frees.
   4. Memory leaks.
   5. Segment confusion errors:
      invalid dereferences, invalid frees.

   Special concerns:

   + S1: Read and write errors.
   + S2: Soundness and completeness: false positives and negatives.
   + S3: Errors in libraries: non-variadic and variadic functions.

### 1.2 c-syntax

The c-syntax directory contains the C syntax tests aiming at checking whether
a tool supports diverse C syntax constructs.

   1. Types that may include pointers:
      pointers, structures, pointer arrays, structure arrays.
   2. Values that may include pointers:
      variables (global, static, stack, heap), constants,
      function calls (including va_arg() calls), conditional expressions.
   3. Definitions and assignments of variables.
   4. Dereferences of pointers:
      dereferences, array subscripts, member expressions.
   5. Function calls:
      non-variadic functions, variadic functions, calls by function pointers,
      va_arg() calls, conditional expressions.

### 1.3 nptrs

The nptrs directory contains the N pointers tests aiming at evaluating the
performance under extreme stress by automatically generating a large number
of pointers and memory objects.

## 2. References

To cite this benchmark suite, please use the following references, where
this suite has been used to evaluate program analysis tools for memory safety.

[1] Zhe Chen, Chong Wang, Junqi Yan, Yulei Sui, and Jingling Xue.
    Runtime Detection of Memory Errors with Smart Status.
    In Proceedings of the 30th ACM SIGSOFT International Symposium on
    Software Testing and Analysis (ISSTA ’21), July 11–17, 2021, Virtual, Denmark.
    ACM, New York, NY, USA. https://doi.org/10.1145/3460319.3464807

[2] Zhe Chen, Junqi Yan, Shuanglong Kan, Ju Qian, and Jingling Xue.
    Detecting Memory Errors at Runtime with Source-Level Instrumentation.
    In Proceedings of the 28th ACM SIGSOFT International Symposium on
    Software Testing and Analysis (ISSTA '19), July 15-19, 2019, Beijing, China.
    ACM, New York, NY, USA. https://doi.org/10.1145/3293882.3330581
