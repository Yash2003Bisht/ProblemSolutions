// QUESTION URL: https://www.codechef.com/problems/CHEFDETE
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int r[n], a[n];
    
    for (int i=0; i<n; i++){
        scanf("%d", &r[i]);
        a[i] = 0;
    }
    
    for (int i=0; i<n; i++)
        if (r[i] != 0) a[r[i] - 1] = 1;
        
    for (int i=0; i<n; i++)
        if (a[i] == 0) printf("%d ", i+1);


	return 0;

}



