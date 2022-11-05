// QUESTION URL: https://www.codechef.com/problems/COMM3

#include <stdio.h>
#include <math.h>

int main(void) {
    int t,r,x1,y1,x2,y2,x3,y3,count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &r);
        scanf("%d%d", &x1,&y1);
        scanf("%d%d", &x2,&y2);
        scanf("%d%d", &x3,&y3);
        
        // distance between two points
        // sqrt((x2-x1)^2 + (y2-y1)^2)
        
        count = 0;
        
        if (sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)) <= r)
            count++;
        if (sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1)) <= r)
            count++;
        if (sqrt((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2)) <= r)
            count++;
            
        if (count >= 2)
            printf("yes\n");
        else
            printf("no\n");
        

        
    }
	return 0;
}



