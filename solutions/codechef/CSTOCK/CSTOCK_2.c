// QUESTION URL: https://www.codechef.com/problems/CSTOCK
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t;
    double s,a,b,c;
    scanf("%d",&t);
    while(t--){
        scanf("%lf%lf%lf%lf", &s,&a,&b,&c);
        double current_stock_price = s+(s*c/100);
        if (current_stock_price >= a && current_stock_price <= b){
            printf("Yes\n");
        } else{
            printf("No\n");
        }
    }
	return 0;
}



