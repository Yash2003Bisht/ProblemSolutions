// DATE: 15/04/2023, 07:06:05
// PROBLEM NAME: Garden Squares
// PROBLEM URL: https://www.codechef.com/problems/GARDENSQ
// PROBLEM DIFFICULTY RATTING: 1246
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t, n, m, counter, count, k, crr;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &m);
        count = 0;
        char garden[n][m+1];

        for (int i=0; i<n; i++)
            scanf("%s", garden[i]);
            
        for (int i=0; i<n-1; i++){
            for (int j=0; j<m-1; j++){
                k = 1, crr = garden[i][j];
                while(k+i < n && k+j <m){
                    if (crr == garden[i][j+k] && garden[i+k][j] == garden[i+k][j+k] && crr == garden[i+k][j])
                        count++;
                    k++;
                }
                
            }
        }
        
        printf("%d\n", count);

    }
    
	return 0;
}



