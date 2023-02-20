// DATE: 18/11/2022, 07:33:06
// PROBLEM NAME: Ada and crayons
// PROBLEM URL: https://www.codechef.com/problems/ADACRA
// PROBLEM DIFFICULTY RATTING: 1099
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#define MIN(x,y)(x>y?y:x)

int main(void) {
    int t, down, up;
    scanf("%d", &t);
    
    while(t--){
        char s[51], crr = ' ';
        down = 0, up= 0;
        scanf("%s", &s);
        
        for (int i=0; s[i] != '\0'; i++){
            if (s[i] == 'U' && crr != 'U'){
                up++;
                crr = 'U';
            } else if (s[i] == 'D' && crr != 'D'){
                down++;
                crr = 'D';
            }
        }
        
        printf("%d\n", MIN(down, up));
        
    }
    
	return 0;
}



