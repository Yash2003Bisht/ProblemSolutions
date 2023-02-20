// DATE: 15/11/2022, 06:54:40
// PROBLEM NAME: String Game
// PROBLEM URL: https://www.codechef.com/problems/ABSTRING
// PROBLEM DIFFICULTY RATTING: 1102
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, i;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char s[n+1];
        int flag=1, a[26]={0};

        scanf("%s", s);
        
        for (i=0; s[i] != '\0'; i++)
            a[s[i]-97]++;
        
        for (i=0; i<26; i++){
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



