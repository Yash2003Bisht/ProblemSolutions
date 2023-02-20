// DATE: 05/09/2022, 09:35:01
// PROBLEM NAME: Chef and Stock Prices 
// PROBLEM URL: https://www.codechef.com/problems/CSTOCK
// PROBLEM DIFFICULTY RATTING: 1069
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t;
    double s,a,b,c;
    scanf("%d",&t);
    while(t--){
        scanf("%lf%lf%lf%lf", &s,&a,&b,&c);
        double current_stock_price = s+(s*(c/100));
        if (current_stock_price >= a && current_stock_price <= b){
            printf("Yes\n");
        } else{
            printf("No\n");
        }
    }
	return 0;
}



