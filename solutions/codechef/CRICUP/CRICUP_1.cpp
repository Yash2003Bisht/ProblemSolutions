// DATE: 07/11/2023, 09:02:35
// PROBLEM NAME: Cup Finals
// PROBLEM URL: https://www.codechef.com/problems/CRICUP
// PROBLEM DIFFICULTY RATTING: 716
// STATUS: accepted
// TIME: 0.00
// MEMORY: 3.5M

#include <iostream>
using namespace std;

int main() {
    int t, x, y, d;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &x, &y, &d);
        
        if (abs(x-y) <= d)
            printf("YES\n");
        else
            printf("NO\n");
        
    }
    
	return 0;
}


