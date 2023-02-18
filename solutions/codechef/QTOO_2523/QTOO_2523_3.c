// QUESTION URL: https://www.codechef.com/problems/QTOO_2523
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char s[n+1];
        int arr[26] = {0}, flag = 0;
        
        scanf("%s", s);
        
        for (int i=0; i<n; i++){
            arr[s[i] - 97]++;
        }
        
        for (int i=0; i<26; i++){
            if (arr[i] >= 2){
                flag = 1;
                 break;
            }
        }
        
        if (flag) printf("%d\n", n - 2);
        else printf("-1\n");
        
        
    }
    
	return 0;
}



