// DATE: 05/07/2023, 09:03:21
// PROBLEM NAME: Football Match
// PROBLEM URL: https://www.codechef.com/problems/FBMT
// PROBLEM DIFFICULTY RATTING: 1379
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.2M

#include <stdio.h>
#include <string.h>

int main(void) {
    int t, n, score1, score2;
    char team1[21], team2[21], temp[21];
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        score1 = 0, score2 = 0;

        if (!n)
            printf("Draw\n");
        else {
            scanf("%s", team1);
            score1++;

            for (int i=1; i<n; i++){
                scanf("%s", temp);
                
                if (!strcmp(temp, team1))
                    score1++;
                else{
                    if (score2 == 0)
                        strcpy(team2, temp);
                    score2++;
                }

            }
            
            if (score1 > score2)
                printf("%s\n", team1);
            else if (score1 < score2)
                printf("%s\n", team2);
            else
                printf("Draw\n");
            
        }
        
    }
    
	return 0;
}



