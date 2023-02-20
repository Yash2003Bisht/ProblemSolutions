// DATE: 28/10/2022, 06:06:29
// PROBLEM NAME: Make Multiple
// PROBLEM URL: https://www.codechef.com/problems/MAKEMULTIPLE
// PROBLEM DIFFICULTY RATTING: 1163
// STATUS: time limit exceeded
// TIME: -
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t, a, b, flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &a, &b);
        flag = 0;
        
        for (int i=1; i<100000; i++){
            if (b%a == 0){
                flag = 1;
                break;
            }
            b++, a++;
        }
        
        if (flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
	return 0;
}



