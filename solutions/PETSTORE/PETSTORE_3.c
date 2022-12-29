// QUESTION URL: https://www.codechef.com/problems/PETSTORE
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, a, flag, b[100];
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        flag = 1;
        
        for (int i=0; i<100; i++) b[i] = 0;
        
        for (int i=0; i<n; i++){
            scanf("%d", &a);
            b[a]++;
        }
        
        for (int i=0; i<100; i++){
            if (b[i] > 0 && b[i] % 2 != 0){
                flag = 0;
                break;
            }
        }
        
        if (flag) printf("YES\n");
        else printf("NO\n");
        
    }
	return 0;
}



