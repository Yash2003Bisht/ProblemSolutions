// DATE: 01/03/2023, 07:59:00
// PROBLEM NAME: Carvans
// PROBLEM URL: https://www.codechef.com/problems/CARVANS
// PROBLEM DIFFICULTY RATTING: 1264
// STATUS: accepted
// TIME: 0.87
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, n, count, flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int s[n];
        count = 0, flag = 1;
        
        for (int i=0; i<n; i++) scanf("%d", &s[i]);
        
        for (int i=0; i<n; i++){
            for (int j=i-1; j>=0; j--){
                if (s[i] > s[j]){
                    flag = 0;
                    break;
                }
            }
            
            if (flag){
                count++;
            } else {
                flag = 1;
            }
            
        }
        
        printf("%d\n", count);

        
    }
    
	return 0;
}



