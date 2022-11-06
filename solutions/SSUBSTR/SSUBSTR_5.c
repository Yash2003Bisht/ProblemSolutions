// QUESTION URL: https://www.codechef.com/problems/SSUBSTR
// STATUS: runtime error(SIGABRT)

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int t, n, total;
    char* s;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        s = (char *) malloc(sizeof(char)*n);
        total = 0;
        scanf("%s", s);
        
        for (int i=0; i<n-1; i++){
            if (s[i] == '1' && s[i+1] == '0')
                total++;
        }
        
        printf("%d\n", total);
    }
	return 0;
}



