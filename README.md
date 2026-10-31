# laboratorium_5

Parallel programming lab (C, pthreads): numerical integration of sin(x) over [0, π] with the trapezoidal rule, sequential vs multithreaded.

- `zad1.c`: sequential integral with timing
- `pthreads_suma.c`: threaded integral, with a mutex-protected global sum and with an array of per-thread partial sums
- `pthreads_suma_origin.c`: original array-sum example
- `include/pomiar_czasu.*`: timing helpers
- `wyniki*.txt`, `całkaWyniki`: measured results

## Build & run
```bash
cmake -B build && cmake --build build
./build/zad1
```
