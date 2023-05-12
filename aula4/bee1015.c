#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float p1_x, p1_y, p2_x, p2_y, dist;

    scanf("%f", &p1_x);
    scanf("%f", &p1_y);
    scanf("%f", &p2_x);
    scanf("%f", &p2_y);

    dist = pow( (p2_x - p1_x), 2);
    dist = dist + pow( (p2_y - p1_y), 2);
    dist = sqrt(dist);

    printf("%.4f\n", dist);

    return 0;
}
