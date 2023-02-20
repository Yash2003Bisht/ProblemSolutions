// DATE: 17/09/2022, 07:31:06
// PROBLEM NAME: Workers
// PROBLEM URL: https://www.codechef.com/problems/CHEFWORK
// PROBLEM DIFFICULTY RATTING: 1146
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int n, t, min_t=100000, min_a=100000, min_at=100000;
    scanf("%d",&n);
    int c[n];
    for (int i=0; i<n; i++){
        scanf("%d", &c[i]);
    }
    
    for (int i=0; i<n; i++){
        scanf("%d",&t);
        if (t==1){
            if (c[i] < min_t){
                min_t = c[i];
            }
        } else if(t==2){
            if (c[i] < min_a){
                min_a = c[i];
            }
        } else{
            if (c[i] < min_at){
                min_at = c[i];
            }
        }
    }
    
    
    
    if(min_a+min_t<min_at){
        printf("%d\n", min_a+min_t);
    } else{
        printf("%d\n", min_at);
    }
        
	return 0;
}



