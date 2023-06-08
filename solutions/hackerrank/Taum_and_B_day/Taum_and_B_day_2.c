// QUESTION URL: https://www.hackerrank.com/challenges/taum-and-bday/problem
// STATUS: Accepted

#include <stdio.h>
#define min(a,b)(a>b?b:a)

int main(){
    int t;
    long long int b, w, bc, wc, z, value;
    scanf("%d", &t);
    
    while(t--){
        scanf("%lld%lld", &b, &w);
        scanf("%lld%lld%lld", &bc, &wc, &z);
        
        if (bc + z < wc)
            wc = bc + z;
        if (wc + z < bc)
            bc = wc + z;

        printf("%lld\n", (b*bc)+(w*wc));
        
    }
    
    return 0;
}
