// DATE: 28/11/2023, 09:21:43
// PROBLEM NAME: Reach fast
// PROBLEM URL: https://www.codechef.com/problems/REACHFAST
// PROBLEM DIFFICULTY RATTING: 777
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, a, b, k, dis;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &a, &b, &k);

        dis = abs(a - b);

        if (!dis)
            printf("0\n");
        else if (k >= dis)
            printf("1\n");
        else{
            if (dis%k == 0)
                printf("%d\n", dis/k);
            else
                printf("%d\n", dis/k + 1);
        }
        

    }
    
	return 0;
}



