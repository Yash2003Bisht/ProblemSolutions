// DATE: 11/11/2022, 06:56:16
// PROBLEM NAME: Group Assignment
// PROBLEM URL: https://www.codechef.com/problems/GRPASSN
// PROBLEM DIFFICULTY RATTING: 1092
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t,n,p,flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int counter[n];
        flag = 1;
        
        for(int i=0; i<n; i++) counter[i] = 0;
        
        for(int i=0; i<n; i++){
            scanf("%d", &p);
            counter[p]++;
        }
        
        for (int i=0; i<n; i++){
            if (counter[i] != 0 && counter[i]%i != 0){
                flag = 0;
                break;
            }
                
        }
        
        if (flag) printf("YES\n");
        else printf("NO\n");
        
    }
	return 0;
}



