// QUESTION URL: https://www.codechef.com/problems/SC31
// STATUS: accepted
// TIME: 0.07
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, n;
    char a[11];
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int total = 0, counter[10] = {0};
        
        for (int i=0; i<n; i++){
            scanf("%s", &a);
            
            for(int j=0; a[j] != '\0'; j++){
                if (a[j] == '1') counter[j]++;
            }

        }
        
        total = 0;
        for(int i=0; i<10; i++){
            if (counter[i]%2 != 0){
                total++;
            }
        }
        
        printf("%d\n", total);
        
    }

	return 0;
}



