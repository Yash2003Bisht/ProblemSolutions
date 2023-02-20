// DATE: 27/09/2022, 06:34:49
// PROBLEM NAME: Turn It
// PROBLEM URL: https://www.codechef.com/problems/NFS
// PROBLEM DIFFICULTY RATTING: 1350
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t,u,v,a,s;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d%d", &u,&v,&a,&s);
        int _v = (u*u) - (2*a*s);
        if (_v <= v*v){
            printf("yes\n");
        } else{
            printf("no\n");
        }
    }
	return 0;
}



