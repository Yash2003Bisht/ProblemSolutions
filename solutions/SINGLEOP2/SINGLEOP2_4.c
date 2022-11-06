// QUESTION URL: https://www.codechef.com/problems/SINGLEOP2
// STATUS: accepted

#include <stdio.h>

int main(void) {
    int t, s, i, first_1;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &s);
        char s_binary[s];
        first_1 = 1;
        scanf("%s", s_binary);
        
        for (i=0; i<s; i++){
            if (s_binary[i] == '1'){
                if (first_1){
                    first_1 = 0;
                } else{
                    break;
                }
            } 
        }
        printf("%d\n", i);
    }
	return 0;
}


