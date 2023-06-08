// QUESTION URL: https://www.hackerrank.com/challenges/taum-and-bday/problem
// STATUS: Wrong Answer

#include <stdio.h>
#define min(a,b)(a>b?b:a)

int main(){
    int t, b, w, bc, wc, z, value;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &b, &w);
        scanf("%d%d%d", &bc, &wc, &z);
        
        if (bc + z < wc)
            wc = bc + z;
        else if (wc + z < bc)
            bc = wc + z;
        
        printf("%d\n", (b*bc)+(w*wc));
        
    }
    
    return 0;
}
