// DATE: 30/01/2023, 08:00:48
// PROBLEM NAME: Palindromic substrings
// PROBLEM URL: https://www.codechef.com/problems/STRPALIN
// PROBLEM DIFFICULTY RATTING: 1238
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, flag;
    scanf("%d", &t);
    
    while(t--){
        char a[1001], b[1001];
        scanf("%s", a);
        scanf("%s", b);
        flag = 0;
        
        for (int i=0; a[i] != '\0'; i++){
            for (int j=0; b[j] != '\0'; j++){
                if (a[i] == b[j]) {
                    flag = 1;
                    break;
                }
            }
        }
        
        if(flag) printf("Yes\n");
        else printf("No\n");
        
    }
    
	return 0;
}



