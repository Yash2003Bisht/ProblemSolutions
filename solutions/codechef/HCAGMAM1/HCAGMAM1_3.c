// DATE: 06/03/2023, 07:09:10
// PROBLEM NAME: Chef And Salary Pay
// PROBLEM URL: https://www.codechef.com/problems/HCAGMAM1
// PROBLEM DIFFICULTY RATTING: 1269
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, x, y, flag, total_count, count, lg_streak;
    char s[31];
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);
        scanf("%s", s);
        count = 0, total_count = 0, lg_streak = 0;

        for (int i=0; s[i] != '\0'; i++){
            if (s[i] == '1'){
                count++;
            } else{
                total_count += count;
                lg_streak = lg_streak < count ? count : lg_streak;
                count = 0;
            }
        }

        if (count){
            total_count += count;
            lg_streak = lg_streak < count ? count : lg_streak;
        }

        printf("%d\n", total_count*x + lg_streak*y);
        
    }
    
	return 0;
}



