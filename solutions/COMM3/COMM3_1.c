// QUESTION URL: https://www.codechef.com/problems/COMM3
// STATUS: accepted

#include <stdio.h>
#include <math.h>

int main(void) {
    int t,r,arr[6];
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &r);
        scanf("%d%d", &arr[0],&arr[1]);
        scanf("%d%d", &arr[2],&arr[3]);
        scanf("%d%d", &arr[4],&arr[5]);
        
        // distance between two points
        // sqrt((x2-x1)^2 + (y2-y1)^2)
        
        float a = sqrt(pow(arr[2]-arr[0], 2) + pow(arr[3]-arr[1], 2));
        float b = sqrt(pow(arr[4]-arr[0], 2) + pow(arr[5]-arr[1], 2));
        float c = sqrt(pow(arr[4]-arr[2], 2) + pow(arr[5]-arr[3], 2));
        
        if ((a <= r && b <= r) || (a <= r && c <= r) || (b <= r && c <= r))
            printf("yes\n");
        else
            printf("no\n");
        

        
    }
	return 0;
}



