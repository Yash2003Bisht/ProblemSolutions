// DATE: 16/09/2023, 08:29:06
// PROBLEM NAME: Triangle Classification
// PROBLEM URL: https://www.codechef.com/problems/TRIANGCL
// PROBLEM DIFFICULTY RATTING: 1462
// STATUS: partially accepted
// TIME: 0.00
// MEMORY: 2.1M

#include <stdio.h>
#include <math.h>

float distance(float x1, float y1, float x2, float y2){
    return (float) sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

float angle(float x1, float y1, float x2, float y2, float x3, float y3){
    float point1 = x2 - x1, point2 = y2 - y1, point3 = x3 - x1, point4 = y3 - y1,
          dot_product, magnitude1, magnitude2, angle;

    dot_product = point1 * point3 + point2 * point4,
    magnitude1 = sqrt(point1 * point1 + point2 * point2),
    magnitude2 = sqrt(point3 * point3 + point4 * point4);
    angle = acos(dot_product / (magnitude1 * magnitude2));

    return angle * 180.0f / M_PI;

}

int main(void) {
    int sub_task, t;
    float x1, y1, x2, y2, x3, y3, d1, d2, d3;
    scanf("%d\n%d", &sub_task, &t);
    
    while(t--){
        scanf("%f%f%f%f%f%f", &x1, &y1, &x2, &y2, &x3, &y3);
        d1 = distance(x1, y1, x2, y2),
        d2 = distance(x1, y1, x3, y3),
        d3 = distance(x2, y2, x3, y3);

        if (d1 == d2 || d1 == d3 || d2 == d3)
            printf("Isosceles ");
        else
            printf("Scalene ");
            
        if (sub_task == 2){
            float angle1, angle2, angle3;
            angle1 = angle(x1, y1, x2, y2, x3, y3),
            angle2 = angle(x1, y1, x3, y3, x2, y2),
            angle3 = angle(x2, y2, x1, y1, x3, y3);

            if (angle1 < 90 && angle2 < 90 && angle3 < 90)
                printf("acute ");
            else if (angle1 == 90 || angle2 == 90 || angle3 == 90)
                printf("right ");
            else
                printf("obtuse ");

        }

        printf("triangle\n");

    }

	return 0;
}



