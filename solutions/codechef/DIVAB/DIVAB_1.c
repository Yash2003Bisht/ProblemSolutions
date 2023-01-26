// QUESTION URL: https://www.codechef.com/problems/DIVAB
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#include <math.h>

int main(void) {
    int t, a, b, n, num;
    double temp;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &a, &b, &n);
        if (a%b == 0) printf("-1\n");
        else{
            temp = (double) n/a;
            num = a*ceil(temp);
            if (num%b != 0) printf("%d\n", num);
            else printf("%d\n", num+a);
        }
        
    }

	return 0;
}



