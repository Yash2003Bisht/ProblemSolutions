// DATE: 17/09/2022, 06:48:46
// PROBLEM NAME: Workers
// PROBLEM URL: https://www.codechef.com/problems/CHEFWORK
// PROBLEM DIFFICULTY RATTING: 1146
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d",&n);
    int c[n], t, min_t=0, min_a=0, min_at=0;
    for (int i=0; i<n; i++){
        scanf("%d", &c[i]);
    }
    for (int i=0; i<n; i++){
        scanf("%d",&t);
        if (t==1){
            if (min_t == 0 || c[i] < min_t){
                min_t = c[i];
            }
        } else if(t==2){
            if (min_a == 0 || c[i] < min_a){
                min_a = c[i];
            }
        } else{
            if (min_at == 0 || c[i] < min_at){
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



