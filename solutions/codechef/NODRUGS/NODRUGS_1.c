// DATE: 10/08/2023, 08:54:03
// PROBLEM NAME: Say No To Drugs
// PROBLEM URL: https://www.codechef.com/problems/NODRUGS
// PROBLEM DIFFICULTY RATTING: 1425
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.9M

#include <stdio.h>

int main(void) {
    int t, n, k, l, max_drug, flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &n, &k, &l);
        max_drug = (l-1)*k, flag = 1;
        int players[n];

        for (int i=0; i<n; i++)
            scanf("%d", &players[i]);

        // only inject drug dose if it increases the speed
        if (max_drug > 0)
            players[n-1] += max_drug;
        
        for (int i=0; i<n-1; i++){
            if (players[i] >= players[n-1]){
                flag = 0;
                break;
            }
        }
        
        if (flag)
            printf("Yes\n");
        else
            printf("No\n");

    }
    
	return 0;
}



