// QUESTION URL: https://www.codechef.com/problems/ATTENDU
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        float present=0.0;
        char s[n];
        scanf("%s", s);
        
        // total number of occurrence 1
        for (int i=0; i<n; i++){
            if (s[i] == '1'){
                present++;
            }
        }
        
        // main solution
        float total_present = ((present+120-n)/120*100);
        if (total_present >= 75){
            printf("YES\n");
        } else{
            printf("NO\n");
        }
        
        
    }
    
	return 0;
}



