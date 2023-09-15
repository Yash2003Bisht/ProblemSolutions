// DATE: 15/09/2023, 08:43:10
// PROBLEM NAME: Dilemma
// PROBLEM URL: https://www.codechef.com/problems/CHEFDIL
// PROBLEM DIFFICULTY RATTING: 1461
// STATUS: partially accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, count;
    char s[10001];
    scanf("%d", &t);
    
    while(t--){
        scanf("%s", s);
        count = 0;

        for (int i=0; s[i] != '\0'; i++){
            if (s[i] == '1')
                count++;
        }

        if (count%2 != 0)
            printf("WIN\n");
        else
            printf("LOSE\n");
        
    }
    
	return 0;
}



