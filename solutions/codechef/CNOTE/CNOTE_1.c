// QUESTION URL: https://www.codechef.com/problems/CNOTE
// STATUS: accepted
// TIME: 0.17
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, x, y, k, n, p, c, pages_req, flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d", &x, &y, &k, &n);
        pages_req = x - y;
        flag = pages_req > 0 ? 0 : 1;
        
        for (int i=0; i<n; i++){
            scanf("%d%d", &p, &c);

            if (p >= pages_req && c <= k && !flag)
                flag = 1;

        }
        
        if (flag) printf("LuckyChef\n");
        else printf("UnluckyChef\n");
        
    }
    
	return 0;
}



