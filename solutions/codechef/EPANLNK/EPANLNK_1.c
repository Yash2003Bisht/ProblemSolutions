// DATE: 24/05/2023, 07:54:21
// PROBLEM NAME: Efficient PAN Linking
// PROBLEM URL: https://www.codechef.com/problems/EPANLNK
// PROBLEM DIFFICULTY RATTING: 1044
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#include <string.h>

int main(void) {
    int t, ans, length;
    scanf("%d", &t);
    
    while(t--){
        char n[100] = {'\0'};
        scanf("%s", n);

        length = strlen(n);
        ans = length == 1 ? n[0] - 48 : 10*(n[length-2] - 48) + n[length-1] - 48;
        printf("%d\n", ans%20);

    }
    
	return 0;
}



