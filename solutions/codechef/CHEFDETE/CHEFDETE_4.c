// QUESTION URL: https://www.codechef.com/problems/CHEFDETE
// STATUS: partially accepted
// TIME: 0.09
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int r[n], count;
    
    for (int i=0; i<n; i++) scanf("%d", &r[i]);
    
    for (int i=1; i<n+1; i++){
        count = 0;

        for (int j=0; j<n; j++)
            if (i == r[j]) count++;
            
        if (!count) printf("%d ", i);

    }

	return 0;
}


