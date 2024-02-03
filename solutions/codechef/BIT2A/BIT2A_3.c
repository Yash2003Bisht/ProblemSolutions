// DATE: 03/02/2024, 08:25:16
// PROBLEM NAME: A - Books
// PROBLEM URL: https://www.codechef.com/problems/BIT2A
// PROBLEM DIFFICULTY RATTING: 1175
// STATUS: partially accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
	int t, n, temp;
	scanf("%d", &t);
	
	while(t--){
	    scanf("%d", &n);
	    int a[n];

        for (int i=0; i<n; i++)
            scanf("%d", &a[i]);

        for (int i=0; i<n; i++){
            temp = 0;
            for (int j=i+1; j<n; j++){
                if (a[i] < a[j])
                    temp++;
                else
                    break;
            }
            printf("%d ", temp);
        }

        printf("\n");

	}
	
}



