// QUESTION URL: https://www.codechef.com/problems/SLOWSOLN

#include <stdio.h>

int main(void) {
    int t,maxt,maxn,sumn,t_,mod_;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d", &maxt,&maxn,&sumn);
        t_ = sumn/maxn;
        mod_ = sumn%maxn;
        
        if (maxt>=t_+1){
            printf("%d\n", t_*maxn*maxn+mod_*mod_);
        } else{
            printf("%d\n", maxt*maxn*maxn);
        }
        
    }
	return 0;
}



