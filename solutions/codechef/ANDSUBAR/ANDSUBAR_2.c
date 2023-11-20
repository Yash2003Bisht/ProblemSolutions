// DATE: 20/11/2023, 09:09:11
// PROBLEM NAME: Longest AND Subarray
// PROBLEM URL: https://www.codechef.com/problems/ANDSUBAR
// PROBLEM DIFFICULTY RATTING: 1502
// STATUS: accepted
// TIME: 0.01
// MEMORY: 1.7M

#include <stdio.h>
#define max(a,b)(a>b?a:b)

int break_point(int n){
    int start = 2;

    while (start < n)
        start *= 2;

    return start/2;
}

int main(void) {
    int t, n, point;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);

        if (n <= 2)
            printf("1\n");
        else {
            point = break_point(n);

            if (n == point*2)
                printf("%d\n", max(point/2, n - point));
            else
                printf("%d\n", max(point/2, n - point + 1));
        }

    }

	return 0;
}



