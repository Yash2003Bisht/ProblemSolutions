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
        wc = min(bc + z, wc);
        bc = min(wc + z, bc);
        printf("%lld\n", (b*bc)+(w*wc));
    }
    
    return 0;
}
