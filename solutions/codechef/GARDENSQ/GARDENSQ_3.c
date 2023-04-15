// DATE: 15/04/2023, 06:53:32
// PROBLEM NAME: Garden Squares
// PROBLEM URL: https://www.codechef.com/problems/GARDENSQ
// PROBLEM DIFFICULTY RATTING: 1246
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, n, m, counter, count, temp;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &m);
        count = 0;
        char garden[n][m+1];

        for (int i=0; i<n; i++)
            scanf("%s", garden[i]);
            
        for (int i=0; i<n-1; i++){
            for (int j=0; j<m-1; j++){
                temp = 1;
                
                while(temp+i < n && temp+j <m){
                    if (garden[i][j] == garden[i][j+temp] && garden[i+temp][j] == garden[i+temp][j+temp] && garden[i][j] == garden[i+temp][j])
                        count++;
                    temp++;
                }
                
            }
        }
        
        printf("%d\n", count);

    }
    
	return 0;
}



