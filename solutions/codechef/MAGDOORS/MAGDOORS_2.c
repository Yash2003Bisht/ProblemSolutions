// DATE: 25/05/2023, 07:15:50
// PROBLEM NAME: Magical Doors
// PROBLEM URL: https://www.codechef.com/problems/MAGDOORS
// PROBLEM DIFFICULTY RATTING: 1355
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, ans;
    scanf("%d", &t);
    
    while(t--){
        char s[100000], crr_match = '0';
        ans = 0;
        scanf("%s", &s);
        
        for (int i=0; s[i] != '\0'; i++){
            if (s[i] == crr_match){
                crr_match = crr_match == '0' ? '1' : '0';
                ans++;
            }
        }
        
        printf("%d\n", ans);
        
    }
    
	return 0;
}



