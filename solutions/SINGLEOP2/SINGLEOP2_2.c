// QUESTION URL: https://www.codechef.com/problems/SINGLEOP2
// STATUS: accepted

#include <stdio.h>

int main(void) {
    int t, s, i;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &s);
        char s_binary[s];
        scanf("%s", s_binary);
        
        for (i=0; i<s; i++){
            if (s_binary[i] == '1' && i > 0){
                break;
            } 
        }
        printf("%d\n", i);
    }
	return 0;
}


