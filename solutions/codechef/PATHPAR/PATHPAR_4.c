// QUESTION URL: https://www.codechef.com/problems/PATHPAR
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, k;
    long long int n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n,&k);
        
        if (n%2 == 0 || k == 1){
            printf("Yes\n");
        } else{
            printf("No\n");
        }
        
    }
    
	return 0;
}



