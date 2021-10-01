# 101 Ways To Find PI
This project's intent is to try to enumerate (and implement) all known ways to calculate an approximated value of PI.

## List
1. `montecarlo_circle` performs the classic Montecarlo method of calculating the ratio between the area of the unit circle and the area of its circumscribed square.
2. `deterministic_montecarlo` performs a "deterministic" version of the Montecarlo method: instead of generating some random points, considers all points at fixed locations.
3. `montecarlo_sphere` performs the same algorithm of `montecarlo_circle`, but with a sphere inside a cube.
4. `recursive_4_splitting` performs a recursive call (each time splitting the area 4 times) to find the area of the quarter-circle in the first quadrant.
5. `row_binary_search` works on the first quadrant section of the unit circle, for each row it binary-searches for the border of the circle and then adds together all those little slices to compute the area of the unit circle.
6. `recursive_binary_search_2d` is an improvement of `recursive_4_splitting` by using binary search to find the border of the circle.
7. `gauss_integral` computes the integral of `exp(-x*x)`, which tends towards `sqrt(pi)`.
8. `continuous_fraction` computes the value of a continuous fraction with a depth limit.
9. `sin_binary_search` finds the first value `x>0` such that `sin(x) == 0`.
10. `viete` computes the infinite product of [Viete's formula](https://it.wikipedia.org/wiki/Formula_di_Vi%C3%A8te).
11. `leibniz` computes the infinite sum of [Leibniz's formula](https://it.wikipedia.org/wiki/Formula_di_Leibniz_per_pi).
12. `bailey` computes the infinite sum of Bailey-Borwein-Plouffe's formula.
13. `newton` computes the infinite sum of Newton's factoial's formula.
14. `chebyshev` computes the infinite sum of Chebyshev's formula.

## Contributions
Each one of these programs is really simple and requires at most two hours of work. In that little time, some bugs can appear unnoticed so if you happen to find one, please let me know. If you want to contribute, also let me know.