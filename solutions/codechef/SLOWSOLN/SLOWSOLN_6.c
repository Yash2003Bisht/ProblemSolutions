// DATE: 06/10/2022, 06:49:26
// PROBLEM NAME: Slow Solution
// PROBLEM URL: https://www.codechef.com/problems/SLOWSOLN
// PROBLEM DIFFICULTY RATTING: 1003
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    long int t,maxt,maxn,sumn,t_,iteration;
    scanf("%d", &t);
    while(t--){
        scanf("%ld%ld%ld", &maxt,&maxn,&sumn);
        float temp1 = (float) sumn/maxn;
        int temp2 = sumn/maxn;
        t_ = temp1 == temp2 ? temp2 : temp2+1;
        iteration = 0;
        
        // edge case
        if (maxt < t_){
            t_ = maxt;
        }
        
        // main part
        while(t_--){
            if (sumn >= maxn){
                iteration += maxn*maxn;
                sumn -= maxn;
            } else{
                iteration += sumn*sumn;
                break;
            }
        }
        
        
        printf("%ld\n", iteration);
        
    }
	return 0;
}



