// DATE: 31/01/2023, 07:33:04
// PROBLEM NAME: Chef and His Apartment Dues
// PROBLEM URL: https://www.codechef.com/problems/CHEFAPAR
// PROBLEM DIFFICULTY RATTING: 1238
// STATUS: accepted
// TIME: 0.13
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, a, amount, flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        amount = 0, flag = 0;

        for (int i=0; i<n; i++){
            scanf("%d", &a);
            
            if(a == 0){
                amount += 1100;
                flag = 1;
            } else if (flag) amount += 100;

        }
        
        printf("%d\n", amount);
        
    }
    
	return 0;
}



