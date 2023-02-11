// QUESTION URL: https://www.codechef.com/problems/TOTR
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#include <ctype.h>

int main(void) {
    int t;
    char m[27], s[101], temp;

    scanf("%d", &t);
    scanf("%s", m);
    
    while(t--){
        scanf("%s", s);
        
        for (int i=0; s[i] != '\0'; i++){
            
            if (s[i] >= 65 && s[i] <= 90){
                temp = toupper(m[s[i] - 65]);
                printf("%c", temp);
            } else if (s[i] >= 97 && s[i] <= 122){
                temp = m[s[i] - 97];
                printf("%c", temp);
            } else if (s[i] == '_') printf(" ");
              else printf("%c", s[i]);

        }
        
        printf("\n");
        
    }
    
	return 0;
}


