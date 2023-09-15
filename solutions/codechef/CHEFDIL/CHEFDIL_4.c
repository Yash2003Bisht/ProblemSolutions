// DATE: 15/09/2023, 08:40:03
// PROBLEM NAME: Dilemma
// PROBLEM URL: https://www.codechef.com/problems/CHEFDIL
// PROBLEM DIFFICULTY RATTING: 1461
// STATUS: accepted
// TIME: 0.01
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    int t, count;
    char s[100001];
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



