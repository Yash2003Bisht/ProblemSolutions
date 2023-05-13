// DATE: 13/05/2023, 07:19:01
// PROBLEM NAME: DDMM or MMDD
// PROBLEM URL: https://www.codechef.com/problems/DDMMORMMDD
// PROBLEM DIFFICULTY RATTING: 992
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, date, month;
    scanf("%d", &t);
    
    while(t--){
        char s[11];
        scanf("%s", s);
        date = ((int)s[0] - 48) * 10 + ((int)s[1] - 48);
        month = ((int)s[3] - 48) * 10 + ((int)s[4] - 48);
        
        if (date <= 12 && month <= 12)
            printf("BOTH\n");
        else if (month <= 12)
            printf("DD/MM/YYYY\n");
        else
            printf("MM/DD/YYYY\n");
        
    }
    
	return 0;
}



