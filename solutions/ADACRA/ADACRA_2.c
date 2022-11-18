// QUESTION URL: https://www.codechef.com/problems/ADACRA
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, count;
    scanf("%d", &t);
    
    while(t--){
        char s[51] = {' '};
        count= 0;
        scanf("%s", &s);
        
        for (int i=0; s[i] != '\0'; i++){
            if (s[i] != s[i+1] && s[i+1] != ' ') count++;
            else if (s[i] == ' ' && s[i+1] == ' ') break;
        }
        
        printf("%d\n", count/2);
        
    }
    
	return 0;
}



