// DATE: 08/09/2022, 07:14:08
// PROBLEM NAME: Minimum Attendance Requirement
// PROBLEM URL: https://www.codechef.com/problems/ATTENDU
// PROBLEM DIFFICULTY RATTING: 1053
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



