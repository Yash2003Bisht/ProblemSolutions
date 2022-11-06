// QUESTION URL: https://www.codechef.com/problems/CHEFNWRK
// STATUS: wrong answer

#include <stdio.h>

int main(void) {
    int t,n,k,i,w;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&k);
        int trip=0,boxsum=0;
        
        for (i = 0; i < n; i++){
            scanf("%d", &w);
            if (w>k){
                trip = -1;
                boxsum = 0;
                break;
            } else if (boxsum+w > k){
                boxsum = w;
                trip += 1;
            } else{
                boxsum += w;
            }
        }
        
        if (boxsum > 0){
            printf("%d\n",trip+1);
        } else{
            printf("%d\n",trip);
        }
        
    }
	return 0;
}



