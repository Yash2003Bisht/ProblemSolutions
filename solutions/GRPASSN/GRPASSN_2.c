// QUESTION URL: https://www.codechef.com/problems/GRPASSN
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t,n,flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int p[n], counter[n];
        flag = 1;
        
        for(int i=0; i<n; i++)
            counter[i] = 0;
        
        for(int i=0; i<n; i++){
            scanf("%d", &p[i]);
            counter[p[i]]++;
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



