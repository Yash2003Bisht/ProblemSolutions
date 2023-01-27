// QUESTION URL: https://www.codechef.com/problems/MINORMAX
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>
#define max(a,b)(a>b?a:b)
#define min(a,b)(a>b?b:a)

int main(void){
    int t, n;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        int b[n];
        
        for (int i=0; i<n; i++) scanf("%d", &b[i]);
        int max_value = b[0], min_value = b[0], flag = 1;
        
        for (int i=0; i<n; i++){
            if (b[i+1] > b[i]){
                if (b[i+1] >= max_value)
                    max_value = max(b[i+1], max_value);
                else flag = 0;
            }
            else if (b[i+1] < b[i]){
                if (b[i+1] <= min_value)
                    min_value = min(b[i+1], min_value);
                else flag = 0;
            }
            
            if (!flag) break;
            
        }
        
        if (flag) printf("YES\n");
        else printf("NO\n");
        
    }
    return 0;
}


