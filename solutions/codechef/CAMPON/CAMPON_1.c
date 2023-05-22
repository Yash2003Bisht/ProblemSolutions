// DATE: 22/05/2023, 08:36:06
// PROBLEM NAME: Camp Or Not
// PROBLEM URL: https://www.codechef.com/problems/CAMPON
// PROBLEM DIFFICULTY RATTING: 1350
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, D, Q, dead, req, solved;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &D);
        int d[D], p[D];

        for (int i=0; i<D; i++){
            scanf("%d", &d[i]);
            scanf("%d", &p[i]);
        }
        
        scanf("%d", &Q);
        
        while(Q--){
            scanf("%d", &dead);
            scanf("%d", &req);
            solved = 0;

            for (int j=0; j<D; j++){
                if (d[j] <= dead)
                    solved += p[j];
            }

            if (solved >= req)
                printf("Go Camp\n");
            else
                printf("Go Sleep\n");

        }

    }
    
	return 0;
}



