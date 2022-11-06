// QUESTION URL: https://www.codechef.com/problems/STRP
// STATUS: wrong answer

#include <stdio.h>

int main(void) {
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d", &n);
        char s[n];
        for (int i=0; i<=n; i++){
            scanf("%c", &s[i]);
        }
        
        int i=0,count=n-1;
        while(count--){
            if(s[i] == s[i+1]){
                i++;
                n--;
            }
            i++;
        }
        printf("%d\n", n);
    }
	return 0;
}



