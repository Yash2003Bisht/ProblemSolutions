// DATE: 22/05/2023, 08:35:24
// PROBLEM NAME: Camp Or Not
// PROBLEM URL: https://www.codechef.com/problems/CAMPON
// PROBLEM DIFFICULTY RATTING: 1350
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, days, scenarios, dead, req, solved;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &days);
        int problem_solved[days][2];

        for (int i=0; i<days; i++)
            scanf("%d %d", &problem_solved[i][0], &problem_solved[i][1]);
        
        scanf("%d", &scenarios);
        
        for (int i=0; i<scenarios; i++){
            scanf("%d %d", &dead, &req);
            solved = 0;
            for (int j=0; j<days; j++){
                if (problem_solved[j][0] <= dead)
                    solved += problem_solved[j][1];
            }

            if (solved >= req)
                printf("Go Camp\n");
            else
                printf("Go Sleep\n");

        }

    }
    
	return 0;
}



