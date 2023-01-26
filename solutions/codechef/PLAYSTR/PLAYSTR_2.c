// QUESTION URL: https://www.codechef.com/problems/PLAYSTR
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char s[n+1], r[n+1];
        int a[2] = {0};
        
        scanf("%s", &s);
        scanf("%s", &r);
        
        for(int i=0; s[i] != '\0'; i++){
            a[s[i] - 48]++;
            a[r[i] - 48]--;
        }
        
        
        if (a[0] == 0 && a[1] == 0) printf("YES\n");
        else printf("NO\n");
        
    }
    
	return 0;
}



