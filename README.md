# 101 Ways To Find PI
This project's intent is to try to enumerate (and implement) all known ways to calculate an approximated value of PI.

# Table of contents
1. [Summary](#summary)
2. [List](#list)
3. [Best Results](#best-results)
    1. [EPS-based methods](#eps-results)
    2. [Iteration-based methods](#iteration-results)
4. [Contributions](#contributions)

## Summary <a name="summary"></a>
+----------------+-----------------+------------------+----------------+
| Name           | Type            | OpenMP available | CUDA available |
+================+=================+==================+================+
| Bayley         | Iteration-based | Not yet          | Not yet        |
+----------------+-----------------+------------------+----------------+
| Chebyshev      | Iteration-based | Not yet          | Not yet        |
+----------------+-----------------+------------------+----------------+
| Continuos      |                 |                  |                |
| fraction       | Iteration-based | Not yet          | Not yet        |
+----------------+-----------------+------------------+----------------+
| Deterministic  |                 |                  |                |
| Montecarlo     | EPS-based       | Not yet          | Not yet        |
+----------------+-----------------+------------------+----------------+
| Gauss          | EPS-based       | Not yet          | Not yet        |
+----------------+-----------------+------------------+----------------+
| Leibniz        | Iteration-based | Not yet          | Not yet        |
+----------------+-----------------+------------------+----------------+
| Montecarlo     |                 |                  |                |
| circle         | Iteration-based | Not yet          | Not yet        |
+----------------+-----------------+------------------+----------------+
| Montecarlo     |                 |                  |                |
| sphere         | Iteration-based | Not yet          | Not yet        |
+----------------+-----------------+------------------+----------------+
| Newton         | Iteration-based | Not yet          | Not yet        |
+----------------+-----------------+------------------+----------------+
| Polygon        | Iteration-based | Not yet          | Not yet        |
+----------------+-----------------+------------------+----------------+
| Recursive      |                 |                  |                |
| 4-splitting    | EPS-based       | Not yet          | Not yet        |
+----------------+-----------------+------------------+----------------+
| Recursive      |                 |                  |                |
| binary-search  | EPS-based       | Not yet          | Not yet        |
+----------------+-----------------+------------------+----------------+
| Row-wise       |                 |                  |                |
| binary-search  | EPS-based       | Not yet          | Not yet        |
+----------------+-----------------+------------------+----------------+
| Viete          | Iteration-based | Not yet          | Not yet        |
+----------------+-----------------+------------------+----------------+

## List <a name="list"></a>
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
12. [`newton`](https://github.com/Ledmington/101-ways-to-find-pi/blob/master/newton.c) computes the infinite sum of Newton's factorial's formula.
13. [`chebyshev`](https://github.com/Ledmington/101-ways-to-find-pi/blob/master/chebyshev.c) computes the infinite sum of Chebyshev's formula.
14. [`polygon`](https://github.com/Ledmington/101-ways-to-find-pi/blob/master/polygon.c) computes the area of the unit circle approximating it as a polygon.

## Best Results <a name="best-results"></a>
All results reported here have been measured on a machine with the following components.

+---------------+-------------------------+
| CPU           | Intel Core i7 7700      |
+---------------+-------------------------+
| CPU cores     | 4 + HyperThreading      |
+---------------+-------------------------+
| RAM           | 16 GB                   |
+---------------+-------------------------+
| RAM frequency | 2400 MHz                |
+---------------+-------------------------+
| GPU           | NVIDIA GeForce GTX 1070 |
+---------------+-------------------------+
| GPU memory    | 8 GB                    |
+---------------+-------------------------+
| CUDA cores    | 1920                    |
+---------------+-------------------------+

### EPS-based methods <a name="eps-results"></a>

### Iteration-based methods <a name="iteration-results"></a>

## Contributions <a name="contributions"></a>
Each one of these programs is really simple and requires at most two hours of work. In that little time, some bugs can appear unnoticed so if you happen to find one, please let me know. If you want to contribute, also let me know.