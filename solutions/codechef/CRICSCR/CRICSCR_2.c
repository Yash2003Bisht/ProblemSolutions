// DATE: 09/05/2023, 06:54:32
// PROBLEM NAME: Cricket Score
// PROBLEM URL: https://www.codechef.com/problems/CRICSCR
// PROBLEM DIFFICULTY RATTING: 1335
// STATUS: accepted
// TIME: 0.14
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int n, ri, wi, total_runs = 0, wickets_lost = 0, flag = 1;
    scanf("%d", &n);
    
    while(n--){
        scanf("%d%d", &ri, &wi);

        if (flag){
            if (total_runs > ri || wickets_lost >= 10){
                flag = 0;
                break;
            }
            else{
                total_runs = ri;
                wickets_lost = wi;
            }
        }
        
    }
    
    if (flag)
        printf("YES\n");
    else
        printf("NO\n");

	return 0;
}


