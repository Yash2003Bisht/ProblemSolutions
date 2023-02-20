// DATE: 09/09/2022, 06:57:25
// PROBLEM NAME: Chef and Work
// PROBLEM URL: https://www.codechef.com/problems/CHEFNWRK
// PROBLEM DIFFICULTY RATTING: 1185
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t,n,k,i;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&k);
        int w;
        int trip=0,boxsum=0;
        
        for (i = 0; i < n; i++){
            scanf("%d", &w);
            if (w>k){
                trip = -1;
                break;
            } else if (boxsum+w > k){
                boxsum = w;
                trip += 1;
            } else{
                boxsum += w;
            }
        }
        
        if(trip == -1){
            printf("%d\n",trip);
        } else if (boxsum){
            printf("%d\n",trip+1);
        } else{
            printf("%d\n",trip);
        }
        
    }
	return 0;
}



