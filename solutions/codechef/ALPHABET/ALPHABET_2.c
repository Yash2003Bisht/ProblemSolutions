// DATE: 13/12/2022, 06:29:12
// PROBLEM NAME: Studying Alphabet
// PROBLEM URL: https://www.codechef.com/problems/ALPHABET
// PROBLEM DIFFICULTY RATTING: 1123
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int n, w_count, s_count;
    char s[27], w[13];
    
    scanf("%s", &s);
    scanf("%d", &n);
    
    while(n--){
        scanf("%s", &w);
        w_count = 0, s_count = 0;
        
        for (int i=0; w[i] != '\0'; i++){
            for (int j=0; s[j] != '\0'; j++){
                if (w[i] == s[j]){
                    s_count++;
                    break;
                }
            }
            w_count++;
        }
        
        if (s_count == w_count) printf("Yes\n");
        else printf("No\n");
        
    }
    
	return 0;
}



