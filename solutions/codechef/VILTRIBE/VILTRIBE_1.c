// DATE: 20/04/2023, 07:06:00
// PROBLEM NAME: Villages and Tribes
// PROBLEM URL: https://www.codechef.com/problems/VILTRIBE
// PROBLEM DIFFICULTY RATTING: 1318
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, a, b, dot_count;
    char s[1000001], crr_char;
    scanf("%d", &t);
    
    while(t--){
        scanf("%s", s);
        a = 0, b = 0, dot_count = 0;
        crr_char = 'C';

        for (int i=0; s[i] != '\0'; i++){
            if (s[i] == 'A'){
                a += (crr_char == 'A' ? dot_count : 0) + 1;
                dot_count = 0;
                crr_char = 'A';
            } else if (s[i] == 'B'){
                b += (crr_char == 'B' ? dot_count : 0) + 1;
                dot_count = 0;
                crr_char = 'B';
            } else
                dot_count++;
        }
        
        printf("%d %d\n", a, b);
        
    }
    
	return 0;
}



