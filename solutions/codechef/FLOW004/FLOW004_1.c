// QUESTION URL: https://www.codechef.com/problems/FLOW004
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main()
{
    int ld,n,t,r;
    
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        ld = n%10;
        while(n>0) {r=n%10; n/=10;}
        printf("%d\n",r+ld);
    }
    return 0;
}



