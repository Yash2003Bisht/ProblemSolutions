// DATE: 25/05/2023, 07:14:26
// PROBLEM NAME: Magical Doors
// PROBLEM URL: https://www.codechef.com/problems/MAGDOORS
// PROBLEM DIFFICULTY RATTING: 1355
// STATUS: time limit exceeded
// TIME: -
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, ans;
    scanf("%d", &t);
    
    while(t--){
        char s[100000];
        ans = 0;
        scanf("%s", &s);
        
        for (int i=0; s[i] != '\0'; i++){
            if (s[i] == '0'){
                for (int j=i+1; s[j] != '\0'; j++){
                    s[j] = s[j] == '0' ? '1' : '0';
                }
                ans++;
            }
        }
        
        printf("%d\n", ans);
        
    }
    
	return 0;
}



