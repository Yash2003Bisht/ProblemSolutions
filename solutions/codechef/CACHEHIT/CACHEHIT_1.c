// DATE: 24/04/2023, 07:48:21
// PROBLEM NAME: Cache Hits
// PROBLEM URL: https://www.codechef.com/problems/CACHEHIT
// PROBLEM DIFFICULTY RATTING: 1320
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t, n ,b, m, x, count, block, cache_block;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d%d", &n, &b, &m);
        count = 0, block = 0, cache_block = -1;

        for (int i=0; i<m; i++){
            scanf("%d", &x);
            block = x/b;
            if (block != cache_block){
                count++;
                cache_block = block;
            }
        }
        
        printf("%d\n", count);

    }
    
	return 0;
}



