// DATE: 08/11/2022, 07:09:34
// PROBLEM NAME: Chef and Table Tennis
// PROBLEM URL: https://www.codechef.com/problems/TTENIS
// PROBLEM DIFFICULTY RATTING: 1085
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, chef, opponent;
    char s[101];
    
    scanf("%d", &t);
    
    while(t--){
        scanf("%s", &s);
        chef = 0, opponent = 0;
        
        for (int i=0; s[i]!='\0'; i++){
            if (s[i] == '1')
                chef++;
            else
                opponent++;
        }
        
        if (chef > opponent)
            printf("WIN\n");
        else
            printf("LOSE\n");
        
    }
    
	return 0;
}



