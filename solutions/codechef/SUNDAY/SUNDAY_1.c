// DATE: 14/02/2024, 03:29:47
// PROBLEM NAME: Count the Holidays
// PROBLEM URL: https://www.codechef.com/problems/SUNDAY
// PROBLEM DIFFICULTY RATTING: 907
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, n, a, count, flag, holiday_days[] = {6, 7, 13, 14, 20, 21, 27, 28};
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        count = 8;
        
        for (int i=0; i<n; i++){
            scanf("%d", &a);
            flag = 1;

            for (int j=0; j<8; j++){
                if (a == holiday_days[j]){
                    flag = 0;
                    break;
                }
            }

            if (flag)
                count++;

        }

        printf("%d\n", count);

    }
    
}



