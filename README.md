# 101 Ways To Find PI
This project's intent is to try to enumerate (and implement) all known ways to calculate an approximated value of PI.

## List
1. `montecarlo.c` performs the classic Montecarlo method of calculating the ratio between the area of the unit circle and the area of its circumscribed square.
2. `deterministic_montecarlo.c` performs a "deterministic" version of the Montecarlo method: instead of generating some random points, considers all points at fixed locations.
3. `recursive_4_splitting.c` performs a recursive call (each time splitting the area 4 times) to find the area of the quarter-circle in the first quadrant.
4. `row_binary_search.c` works on the first quadrant section of the unit circle, for each row it binary-searches for the border of the circle and then adds together all those little slices to compute the area of the unit circle.
5. `gauss_integral.c` computes the integral of `exp(-x*x)`, which tends towards `sqrt(pi)`

## Contributions
Each one of these programs is really simple and requires at most two hours of work. In that little time, some bugs can appear unnoticed so if you happen to find one, please let me know. If you want to contribute, also let me know.