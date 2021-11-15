#include <stdio.h>
#include <math.h>

typedef struct {
    double x, y;
} Point;

#define max_points 12345678

Point border[max_points];

double get_y(double x) {
    return sqrt(1-x*x);
}

int main()
{
    border[0].x = 0.0f;
    border[0].y = 0.0f;
    
    // Finding the points on the border
    for(unsigned int i=1; i<max_points; i++) {
        border[i].x = (double)i / (double)max_points;
        border[i].y = get_y(border[i].x);
    }
    
    // Calculating the area of the polygon defined by those points
    double approx_pi = 0.0f;
    for(unsigned int i=0; i<max_points; i++) {
        unsigned int next = (i+1)%max_points;
        approx_pi += (border[i].x*border[next].y - border[i].y*border[next].x);
    }
    approx_pi = fabs(approx_pi/2);
    
    printf("Real PI:    %.20f\n", M_PI);
	printf("Approx. PI: %.20f\n", 4*approx_pi);

    return 0;
}