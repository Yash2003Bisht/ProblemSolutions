// DATE: 03/02/2023, 08:33:01
// PROBLEM NAME: Laddu
// PROBLEM URL: https://www.codechef.com/problems/LADDU
// PROBLEM DIFFICULTY RATTING: 1241
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>
#include <string.h>

int main(void) {
    int t, activites, int_value, total_laddus, flag;
    char s[100];
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%s", &activites, s);
        total_laddus = 0;
        
        if (!strcmp(s, "INDIAN")) flag = 1;
        else flag = 0;
        
        for (int i=0; i<activites; i++){

            scanf("%s", s);
            
            // contest won
            if (!strcmp(s, "CONTEST_WON")){
                scanf("%d", &int_value);
                total_laddus += 300 + (int_value>20 ? 0:20-int_value);
            }
            
            // top contributor
            else if (!strcmp(s, "TOP_CONTRIBUTOR")) total_laddus += 300;
            
            // bug found
            else if (!strcmp(s, "BUG_FOUND")){
                scanf("%d", &int_value);
                total_laddus += int_value;
            }
            
            // contest hosted
            else total_laddus += 50;
            
        }
        
        // indian
        if (flag) printf("%d\n", total_laddus/200);

        // non-indian
        else printf("%d\n", total_laddus/400);

    }
    
	return 0;
}



