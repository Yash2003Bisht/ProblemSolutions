// DATE: 17/08/2023, 09:10:41
// PROBLEM NAME: High Accuracy
// PROBLEM URL: https://www.codechef.com/problems/ACCURACY
// PROBLEM DIFFICULTY RATTING: 580
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.9M

#include <stdio.h>
#include <math.h>

int main(void) {
    int t, ans;
    float x;
    scanf("%d", &t);

    while(t--){
        scanf("%f", &x);
        ans = ceil((float) x/3)*3 - x;
        printf("%d\n", ans);
        
    }
    
	return 0;
}



