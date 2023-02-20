// DATE: 17/11/2022, 07:37:02
// PROBLEM NAME: Candies
// PROBLEM URL: https://www.codechef.com/problems/CNDY
// PROBLEM DIFFICULTY RATTING: 1018
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, n_size, counter, flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        n_size = n*2;
        long long int a[n_size];
        flag = 1;
        
        for (int i=0; i<n_size; i++)
            scanf("%lld", &a[i]);
            
        for (int i=0; i<(n*2)-1; i++){
            counter = 1;
            for (int j=i+1; j<n_size; j++){
                if (a[i] == a[j])
                    counter++;
                if (counter >= 3){
                    flag = 0;
                    break;
                }
            }
            
            if (!flag) break;
            
        }
        
        if (flag){
            printf("Yes\n");
        } else{
            printf("No\n");
        }
        
    }
    
	return 0;
}



