// DATE: 16/09/2023, 08:56:20
// PROBLEM NAME: Triangle Classification
// PROBLEM URL: https://www.codechef.com/problems/TRIANGCL
// PROBLEM DIFFICULTY RATTING: 1462
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>
#define max(a, b)(a>b?a:b)

int distance(int x1, int y1, int x2, int y2){
    return (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
}

int main(void) {
    int sub_task, t, x1, y1, x2, y2, x3, y3, d1, d2, d3;
    scanf("%d\n%d", &sub_task, &t);
    
    while(t--){
        scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
        d1 = distance(x1, y1, x2, y2),
        d2 = distance(x1, y1, x3, y3),
        d3 = distance(x2, y2, x3, y3);

        if (d1 == d2 || d1 == d3 || d2 == d3)
            printf("Isosceles ");
        else
            printf("Scalene ");

        if (sub_task == 2){
            int  max_dis = max(d1, d2), diff;

            max_dis = max(max_dis, d3),
            diff = (d1 + d2 + d3) - max_dis;

            if (max_dis == diff)
                printf("right ");
            else if (max_dis > diff)
                printf("obtuse ");
            else
                printf("acute ");
        }

        printf("triangle\n");

    }

	return 0;
}


