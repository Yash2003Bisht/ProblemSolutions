// DATE: 21/08/2023, 08:51:22
// PROBLEM NAME: Make AP
// PROBLEM URL: https://www.codechef.com/problems/MAKEAP
// PROBLEM DIFFICULTY RATTING: 577
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, a, c, flag, num;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &a, &c);
        flag = 0, num;

        for (int i=a; i<=c; i++){
            if (i-a == c-i){
                flag = 1;
                num = i;
                break;
            }
        }
        
        if (flag)
            printf("%d\n", num);
        else
            printf("-1\n");
        
    }
    
	return 0;
}



