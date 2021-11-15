# 101 Ways To Find PI
This project's intent is to try to enumerate (and implement) all known ways to calculate an approximated value of PI.

## List
1. [`montecarlo_circle`](https://github.com/Ledmington/101-ways-to-find-pi/blob/master/montecarlo_circle.c) performs the classic Montecarlo method of calculating the ratio between the area of the unit circle and the area of its circumscribed square.
2. [`deterministic_montecarlo`](https://github.com/Ledmington/101-ways-to-find-pi/blob/master/deterministic_montecarlo.c) performs a "deterministic" version of the Montecarlo method: instead of generating some random points, considers all points at fixed locations.
3. [`montecarlo_sphere`](https://github.com/Ledmington/101-ways-to-find-pi/blob/master/montecarlo_sphere.c) performs the same algorithm of `montecarlo_circle`, but with a sphere inside a cube.
4. [`recursive_4_splitting`](https://github.com/Ledmington/101-ways-to-find-pi/blob/master/recursive_4_splitting.c) performs a recursive call (each time splitting the area 4 times) to find the area of the quarter-circle in the first quadrant.
5. [`row_binary_search`](https://github.com/Ledmington/101-ways-to-find-pi/blob/master/row_binary_search.c) works on the first quadrant section of the unit circle, for each row it binary-searches for the border of the circle and then adds together all those little slices to compute the area of the unit circle.
6. [`recursive_binary_search_2d`](https://github.com/Ledmington/101-ways-to-find-pi/blob/master/recursive_binary_search_2d.c) is an improvement of `recursive_4_splitting` by using binary search to find the border of the circle.
7. [`gauss_integral`](https://github.com/Ledmington/101-ways-to-find-pi/blob/master/gauss_integral.c) computes the integral of `exp(-x*x)`, which tends towards `sqrt(pi)`.
8. [`continuous_fraction`](https://github.com/Ledmington/101-ways-to-find-pi/blob/master/continuous_fraction.c) computes the value of a continuous fraction with a depth limit.
9. [`viete`](https://github.com/Ledmington/101-ways-to-find-pi/blob/master/viete.c) computes the infinite product of [Viete's formula](https://it.wikipedia.org/wiki/Formula_di_Vi%C3%A8te).
10. [`leibniz`](https://github.com/Ledmington/101-ways-to-find-pi/blob/master/leibniz.c) computes the infinite sum of [Leibniz's formula](https://it.wikipedia.org/wiki/Formula_di_Leibniz_per_pi).
11. [`bailey`](https://github.com/Ledmington/101-ways-to-find-pi/blob/master/bailey.c) computes the infinite sum of Bailey-Borwein-Plouffe's formula.
12. [`newton`](https://github.com/Ledmington/101-ways-to-find-pi/blob/master/newton.c) computes the infinite sum of Newton's factoial's formula.
13. [`chebyshev`](https://github.com/Ledmington/101-ways-to-find-pi/blob/master/chebyshev.c) computes the infinite sum of Chebyshev's formula.
14. [`polygon`](https://github.com/Ledmington/101-ways-to-find-pi/blob/master/polygon.c) computes the area of the unit circle approximating it as a polygon.

## Contributions
Each one of these programs is really simple and requires at most two hours of work. In that little time, some bugs can appear unnoticed so if you happen to find one, please let me know. If you want to contribute, also let me know.