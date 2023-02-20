// DATE: 06/10/2022, 07:11:13
// PROBLEM NAME: Slow Solution
// PROBLEM URL: https://www.codechef.com/problems/SLOWSOLN
// PROBLEM DIFFICULTY RATTING: 1003
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    long int t,maxt,maxn,sumn,t_,mod_;
    scanf("%d", &t);
    while(t--){
        scanf("%ld%ld%ld", &maxt,&maxn,&sumn);
        t_ = sumn/maxn;
        mod_ = sumn%maxn;
        
        if (maxt < t_){
            t_ = maxt;
        }
        
        printf("%ld\n", t_*maxn*maxn+mod_*mod_);
        
    }
	return 0;
}



