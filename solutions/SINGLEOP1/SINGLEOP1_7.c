// QUESTION URL: https://www.codechef.com/problems/SINGLEOP1
// STATUS: runtime error(SIGABRT)
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int t, s, i;
    char* s_binary;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &s);
        s_binary = (char*) malloc(s * sizeof(char));
        scanf("%s", s_binary);
        
        for (i=0; i<s; i++){
            if (s_binary[i] == '0'){
                break;
            }
        }
        printf("%d\n", i);
    }
	return 0;
}



