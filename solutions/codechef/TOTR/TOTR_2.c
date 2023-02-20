// DATE: 11/02/2023, 07:40:43
// PROBLEM NAME: Tourist Translations
// PROBLEM URL: https://www.codechef.com/problems/TOTR
// PROBLEM DIFFICULTY RATTING: 1252
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#include <ctype.h>

int main(void) {
    int t;
    char m_lower[27], m_upper[27], s[101], temp;

    scanf("%d", &t);
    scanf("%s", m_lower);
    
    for (int i=0; m_lower[i] != '\0'; i++)
        m_upper[i] = toupper(m_lower[i]);

    
    while(t--){
        scanf("%s", s);
        
        for (int i=0; s[i] != '\0'; i++){
            
            if (s[i] >= 65 && s[i] <= 90){
                temp = m_upper[s[i] - 65];
                printf("%c", temp);
            } else if (s[i] >= 97 && s[i] <= 122){
                temp = m_lower[s[i] - 97];
                printf("%c", temp);
            } else if (s[i] == '_') printf(" ");
              else printf("%c", s[i]);

        }
        
        printf("\n");
        
    }
    
	return 0;
}


