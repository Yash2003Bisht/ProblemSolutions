// DATE: 07/09/2022, 06:45:46
// PROBLEM NAME: String protocol
// PROBLEM URL: https://www.codechef.com/problems/STRP
// PROBLEM DIFFICULTY RATTING: 1065
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 0M

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



