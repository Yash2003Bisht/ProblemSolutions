// QUESTION URL: https://www.codechef.com/problems/BIGSALE
// STATUS: accepted
// TIME: 0.25
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t;
    double n, p, q, d, loss, increased_price;
    scanf("%d", &t);
    
    while(t--){
        scanf("%lf", &n);
        loss = 0.0;
        
        for (int i=0; i<n; i++){
            scanf("%lf%lf%lf", &p,  &q, &d);
            increased_price = p + (p*(d/100));
            loss += (p - (increased_price - (increased_price * (d/100)))) * q;
        }
        
        printf("%.9lf\n", loss);
        
    }
    
	return 0;
}



