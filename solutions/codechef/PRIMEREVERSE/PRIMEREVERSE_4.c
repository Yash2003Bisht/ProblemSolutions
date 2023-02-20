// DATE: 30/12/2022, 07:10:14
// PROBLEM NAME: Prime Reversal
// PROBLEM URL: https://www.codechef.com/problems/PRIMEREVERSE
// PROBLEM DIFFICULTY RATTING: 1053
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char a[n+1], b[n+1];
        int counter[4] = {0};
        scanf("%s", a);
        scanf("%s", b);

        for (int i=0; i<n; i++){
            if (a[i] == '0') counter[0]++;
            else counter[2]++;

            if (b[i] == '0') counter[1]++;
            else counter[3]++;
        }
        
        if (counter[0] == counter[1] && counter[2] == counter[3]) printf("YES\n");
        else printf("NO\n");

    }
	return 0;
}



