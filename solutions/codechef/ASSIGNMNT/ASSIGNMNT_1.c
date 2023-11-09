// DATE: 09/11/2023, 09:19:38
// PROBLEM NAME: Pending Assignments
// PROBLEM URL: https://www.codechef.com/problems/ASSIGNMNT
// PROBLEM DIFFICULTY RATTING: 468
// STATUS: accepted
// TIME: 0.01
// MEMORY: 1.5M

#include <stdio.h>

int main(void) {
    int t, x, y, z;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &x, &y, &z);

        if (ceil((float)(x*y)/1440) <= z)
            printf("YES\n");
        else
            printf("NO\n");

    }
    
	return 0;
}



