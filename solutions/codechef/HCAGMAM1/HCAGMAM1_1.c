// DATE: 06/03/2023, 07:14:50
// PROBLEM NAME: Chef And Salary Pay
// PROBLEM URL: https://www.codechef.com/problems/HCAGMAM1
// PROBLEM DIFFICULTY RATTING: 1269
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, x, y, total_count, temp, lg_streak;
    char s[31];
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);
        scanf("%s", s);
        temp = 0, total_count = 0, lg_streak = 0;

        for (int i=0; s[i] != '\0'; i++){
            if (s[i] == '1'){
                temp++;
            } else{
                total_count += temp;
                lg_streak = lg_streak < temp ? temp : lg_streak;
                temp = 0;
            }
        }

        if (temp){
            total_count += temp;
            lg_streak = lg_streak < temp ? temp : lg_streak;
        }

        printf("%d\n", total_count*x + lg_streak*y);
        
    }
    
	return 0;
}



