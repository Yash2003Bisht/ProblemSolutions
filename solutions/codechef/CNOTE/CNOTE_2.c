// DATE: 13/02/2023, 07:40:37
// PROBLEM NAME: Chef and Notebooks
// PROBLEM URL: https://www.codechef.com/problems/CNOTE
// PROBLEM DIFFICULTY RATTING: 1255
// STATUS: accepted
// TIME: 0.17
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, x, y, k, n, pages_req, flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d", &x, &y, &k, &n);
        int p[n], c[n];
        
        for (int i=0; i<n; i++){
            scanf("%d%d", &p[i], &c[i]);
        }
        
        pages_req = x - y, flag = 0;
        
        if (pages_req > 0){
            
            for (int i=0; i<n; i++){
                if (p[i] >= pages_req && c[i] <= k){
                    flag = 1;
                    break;
                }
            }
            
            if (flag) printf("LuckyChef\n");
            else printf("UnluckyChef\n");
            
        } else {
            printf("LuckyChef\n");
        }
        
    }
    
	return 0;
}



