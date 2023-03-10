// DATE: 10/03/2023, 08:01:30
// PROBLEM NAME: Equal Elements
// PROBLEM URL: https://www.codechef.com/problems/EQUALELE
// PROBLEM DIFFICULTY RATTING: 1123
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, n, a;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        int counter[n], repeat = 1;
        
        for (int i=0; i<n; i++)
            counter[i] = 0;
        
        for (int i=0; i<n; i++){
            scanf("%d", &a);
            counter[a-1]++;
        }
        
        for (int i=0; i<n; i++){
            if (counter[i] > repeat)
                repeat = counter[i];
        }

        printf("%d\n", n - repeat);

    }
    
	return 0;
}



