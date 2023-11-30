// DATE: 29/11/2023, 09:39:45
// PROBLEM NAME: Palindrome Pain
// PROBLEM URL: https://www.codechef.com/problems/PALINPAIN
// PROBLEM DIFFICULTY RATTING: 1506
// STATUS: accepted
// TIME: 0.02
// MEMORY: 1.6M

#include <stdio.h>

void print_palindrome(int x, int y, int pattern){
    if (x%2 == 0){
        if (pattern == 1){
            for (int i=0; i<x/2; i++)
                printf("a");
            for (int i=0; i<y; i++)
                printf("b");
            for (int i=0; i<x/2; i++)
                printf("a");
        } else {
            if (x%2 == 0 && y%2 == 0){
                for (int i=0; i<y/2; i++)
                    printf("b");
                for (int i=0; i<x; i++)
                    printf("a");
                for (int i=0; i<y/2; i++)
                    printf("b");
            } else {
                for (int i=0; i<y/2; i++)
                    printf("b");
                for (int i=0; i<x/2; i++)
                    printf("a");

                printf("b");

                for (int i=0; i<x/2; i++)
                    printf("a");
                for (int i=0; i<y/2; i++)
                    printf("b");
            }
        }
    } else {
        if (pattern == 1){
            for (int i=0; i<y/2; i++)
                printf("b");
            for (int i=0; i<x; i++)
                printf("a");
            for (int i=0; i<y/2; i++)
                printf("b");
        } else {
            if (x%2 == 0 && y%2 == 0){
                for (int i=0; i<x/2; i++)
                    printf("a");
                for (int i=0; i<y; i++)
                    printf("b");
                for (int i=0; i<x/2; i++)
                    printf("a");
            } else {
                for (int i=0; i<x/2; i++)
                    printf("a");
                for (int i=0; i<y/2; i++)
                    printf("b");

                printf("a");

                for (int i=0; i<y/2; i++)
                    printf("b");
                for (int i=0; i<x/2; i++)
                    printf("a");
            }
        }
    }
    printf("\n");
}

int main(void) {
    int t, x, y;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &x, &y);

        if ((x%2 != 0 && y%2 != 0) || (x == 1 || y == 1))
            printf("-1\n");
        else {
            print_palindrome(x, y, 1);
            print_palindrome(x, y, 2);
        }

    }

	return 0;
}



