// QUESTION URL: https://www.codechef.com/problems/TRAVELPS

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



