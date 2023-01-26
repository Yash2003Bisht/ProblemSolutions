// QUESTION URL: https://www.codechef.com/problems/ABSTRING
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t,n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char s[n+1];
        int a[26] = {0}, flag = 1;
        scanf("%s", s);
        
        for (int i=0; s[i] != '\0'; i++)
            a[s[i]-97]++;
        
        for (int i=0; i<26; i++){
            if (a[i] % 2 != 0){
                flag = 0;
                break;
            }
        }
        
        if (flag) printf("YES\n");
        else printf("NO\n");
        
    }
    
	return 0;
}



