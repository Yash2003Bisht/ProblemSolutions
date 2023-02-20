// DATE: 12/10/2022, 06:21:47
// PROBLEM NAME: Single Operation Part 1
// PROBLEM URL: https://www.codechef.com/problems/SINGLEOP1
// PROBLEM DIFFICULTY RATTING: 1217
// STATUS: runtime error(SIGABRT)
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int t, s, num;
    char* s_binary;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &s);
        s_binary = (char*) malloc(s * sizeof(char));
        num = 0;
        scanf("%s", s_binary);
        
        for (int i=0; i<s; i++){
            if (s_binary[i] == '0'){
                break;
            } else{
                num++;
            }
        }
        printf("%d\n", num);
    }
	return 0;
}



