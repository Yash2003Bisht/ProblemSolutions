// DATE: 26/12/2023, 09:05:23
// PROBLEM NAME: Body Mass Index
// PROBLEM URL: https://www.codechef.com/problems/BMI
// PROBLEM DIFFICULTY RATTING: 845
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>
#include <math.h>

int main(void) {
    int t, m, h, bmi;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d %d", &m, &h);
        bmi = m/pow(h, 2);
        
        if (bmi <= 18)
            printf("1\n");
        else if (bmi <= 24)
            printf("2\n");
        else if (bmi <= 29)
            printf("3\n");
        else
            printf("4\n");

    }

}


