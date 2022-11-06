// QUESTION URL: https://www.codechef.com/problems/SLOWSOLN
// STATUS: wrong answer

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



