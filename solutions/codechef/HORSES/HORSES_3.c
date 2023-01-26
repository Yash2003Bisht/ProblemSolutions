// QUESTION URL: https://www.codechef.com/problems/HORSES
// STATUS: accepted
// TIME: 0.18
// MEMORY: 5.4M

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        long long int s[n], min_value = 1000000000, temp;
        
        for (int i=0; i<n; i++)
            scanf("%lld", &s[i]);
        
        for (int i=0; i<n; i++){
            for (int j=i+1; j<n; j++){
                temp = abs(s[i] - s[j]);
                if (temp < min_value) min_value = temp;
            }
        }
        
        printf("%lld\n", min_value);
        
    }
    
	return 0;
}



