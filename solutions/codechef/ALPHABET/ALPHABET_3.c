// QUESTION URL: https://www.codechef.com/problems/ALPHABET
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 0M

#include <stdio.h>

int main(void) {
    int n, flag;
    char s[27], w[13];
    
    scanf("%s", &s);
    scanf("%d", &n);
    
    while(n--){
        scanf("%s", &w);
        flag = 0;
        
        for (int i=0; w[i] != '\0'; i++){
            for (int j=0; s[j] != '\0'; j++){
                if (w[i] == s[j]){
                    flag = 1;
                    break;
                }
            }
            
            if (!flag) break;
            
        }
        
        if (flag) printf("Yes\n");
        else printf("No\n");
        
    }
    
	return 0;
}



