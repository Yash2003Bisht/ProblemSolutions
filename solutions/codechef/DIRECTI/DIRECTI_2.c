// DATE: 14/08/2023, 08:25:21
// PROBLEM NAME: Reversing directions
// PROBLEM URL: https://www.codechef.com/problems/DIRECTI
// PROBLEM DIFFICULTY RATTING: 1426
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>
#include <string.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char directions[n][6], road[n][50];

        for (int i=0; i<n; i++){
            scanf("%s ", directions[i]);
            fgets(road[i], 50, stdin);
        }

        printf("Begin %s", road[n-1]);

        for (int i=n-1; i>0; i--){
            if (!strcmp(directions[i], "Right"))
                printf("Left");
            else
                printf("Right");
            printf(" %s", road[i-1]);
        }

    }
    
	return 0;
}


