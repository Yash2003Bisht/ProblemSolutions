// QUESTION URL: https://www.codechef.com/problems/KOL15A
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, count;
    char s[1001];
    scanf("%d", &t);
    
    while(t--){
        scanf("%s", &s);
        count = 0;
        
        for (int i=0; s[i] != '\0'; i++){
            if (s[i] >= 48 && s[i] <= 57) count += s[i] - 48;
        }
        
        printf("%d\n", count);
        
    }
    
	return 0;
}



