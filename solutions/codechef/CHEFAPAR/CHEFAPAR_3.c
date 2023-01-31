// QUESTION URL: https://www.codechef.com/problems/CHEFAPAR
// STATUS: accepted
// TIME: 0.14
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, n, a, fine, amount, flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        fine = 0, amount = 0, flag = 0;

        for (int i=0; i<n; i++){
            scanf("%d", &a);
            
            if(a == 0){
                amount += 1000;
                fine += 100;
                flag = 1;
            } else if (flag) fine += 100;

        }
        
        printf("%d\n", fine + amount);
        
    }
    
	return 0;
}



