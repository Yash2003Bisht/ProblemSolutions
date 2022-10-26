// QUESTION URL: https://www.codechef.com/problems/FLIPPAL

#include <stdio.h>

int main(void) {
    int t,n,one,zero;
    
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        
        char s[n];
        one = zero = 0;
        
        scanf("%s", &s);
        
        for (int i=0; i<n; i++){
            if (s[i] == '0')
                zero++;
            else
                one++;
        }
        
        if (one%2 == 0 || zero%2 == 0)
            printf("YES\n");
        else
            printf("NO\n");
        
    }
	return 0;
}



