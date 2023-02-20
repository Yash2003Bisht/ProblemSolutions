// DATE: 17/02/2023, 07:11:16
// PROBLEM NAME: Hiring Test
// PROBLEM URL: https://www.codechef.com/problems/HIRETEST
// PROBLEM DIFFICULTY RATTING: 1260
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t, n, m, x, y, p_solved, f_solved;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &m);
        scanf("%d%d", &x, &y);
        
        char result[m+1];
        
        for (int i=0; i<n; i++){
            scanf("%s", result);
            p_solved = 0, f_solved = 0;
            
            for (int j=0; result[j] != '\0'; j++){
                if (result[j] == 'F') f_solved++;
                else if (result[j] == 'P') p_solved++;
            }
            
            if (f_solved >= x || (f_solved == x-1 && p_solved >= y))
                printf("1");
            else
                printf("0");
            
        }
        
        printf("\n");
        
    }
    
	return 0;
}



