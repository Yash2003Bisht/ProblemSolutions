// DATE: 16/09/2022, 05:33:32
// PROBLEM NAME: Travel Pass
// PROBLEM URL: https://www.codechef.com/problems/TRAVELPS
// PROBLEM DIFFICULTY RATTING: 1118
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t,n,a,b;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d", &n,&a,&b);
        char s[n];
        int t_time=0;
        scanf("%s", &s);
        for(int i=0; i<n; i++){
            if (s[i] == '0'){
                t_time += a;
            } else{
                t_time += b;
            }
        }
        printf("%d\n", t_time);
    }
	return 0;
}



