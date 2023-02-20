// DATE: 17/11/2022, 07:30:17
// PROBLEM NAME: Candies
// PROBLEM URL: https://www.codechef.com/problems/CNDY
// PROBLEM DIFFICULTY RATTING: 1018
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, counter, flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        long long int a[n*2];
        flag = 1;
        
        for (int i=0; i<n*2; i++)
            scanf("%lld", &a[i]);
            
        for (int i=0; i<(n*2)-1; i++){
            if (flag){
                counter = 1;
                for (int j=i+1; j<n*2; j++){
                    if (a[i] == a[j])
                        counter++;
                    if (counter >= 3){
                        flag = 0;
                        break;
                    }
                }
            } else break;
        }
        
        if (flag){
            printf("Yes\n");
        } else{
            printf("No\n");
        }
        
    }
    
	return 0;
}



