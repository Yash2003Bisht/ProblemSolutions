// QUESTION URL: https://www.codechef.com/problems/EQUALSTRING
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t,n,count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        
        char a[n], b[n];
        count = 0;
        
        scanf("%s", &a);
        scanf("%s", &b);
        
        for(int i=0; i<n; i++){
            if (b[i] != a[i]){
                for (int j=i; j<n; j++){
                    if (a[j] != b[j])
                        a[j] = b[i];
                }
                count++;
            }
        }
        
        printf("%d\n", count);
    }
    
	return 0;
}



