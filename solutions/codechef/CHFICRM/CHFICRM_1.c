// DATE: 08/03/2023, 08:12:11
// PROBLEM NAME: Chef and Icecream
// PROBLEM URL: https://www.codechef.com/problems/CHFICRM
// PROBLEM DIFFICULTY RATTING: 1269
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t, n, a, coin5, coin10, flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        flag = 1, coin5 = 0, coin10 = 0;

        for (int i=0; i<n; i++){
            scanf("%d", &a);
            
            if (flag){
                if (a == 5){
                    coin5++;
                } else if (a == 10){
                    if (coin5 == 0){
                        flag = 0;
                    } else{
                        coin5--;
                        coin10++;
                    }
                        
                } else {
                    if (coin5 < 2 && coin10 == 0){
                        flag = 0;
                    } else {
                        if (coin10)
                            coin10--;
                        else
                            coin5 -= 2;
                    }
                }
            }
            
        }
        
        if (flag)
            printf("YES\n");
        else
            printf("NO\n");
        
    }
    
	return 0;
}



