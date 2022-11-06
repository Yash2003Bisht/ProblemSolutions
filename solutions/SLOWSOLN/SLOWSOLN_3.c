// QUESTION URL: https://www.codechef.com/problems/SLOWSOLN
// STATUS: accepted

#include <stdio.h>

int main(void) {
    long int t,maxt,maxn,sumn,t_,mod_;
    scanf("%d", &t);
    while(t--){
        scanf("%ld%ld%ld", &maxt,&maxn,&sumn);
        t_ = sumn/maxn;
        mod_ = sumn%maxn;
        
        if (maxt>=t_+1){
            printf("%ld\n", t_*maxn*maxn+mod_*mod_);
        } else{
            printf("%ld\n", maxt*maxn*maxn);
        }
        
    }
	return 0;
}



