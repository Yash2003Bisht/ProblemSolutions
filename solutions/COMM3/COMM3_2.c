// QUESTION URL: https://www.codechef.com/problems/COMM3
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#include <math.h>

int main(void) {
    int t,r,x1,y1,x2,y2,x3,y3;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &r);
        scanf("%d%d", &x1,&y1);
        scanf("%d%d", &x2,&y2);
        scanf("%d%d", &x3,&y3);
        
        // distance between two points
        // sqrt((x2-x1)^2 + (y2-y1)^2)
        
        float a = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
        float b = sqrt(pow(x3-x1, 2) + pow(y3-y1, 2));
        float c = sqrt(pow(x3-x2, 2) + pow(y3-y2, 2));
        
        if ((a <= r && b <= r) || (a <= r && c <= r) || (b <= r && c <= r))
            printf("yes\n");
        else
            printf("no\n");
        

        
    }
	return 0;
}



