// DATE: 04/01/2023, 07:27:57
// PROBLEM NAME: Jumping in the hills
// PROBLEM URL: https://www.codechef.com/problems/HILLS
// PROBLEM DIFFICULTY RATTING: 1216
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
	int t, n, u, d, h1, h2, count, parachute, done;
	scanf("%d", &t);
	
	while(t--){
	    scanf("%d%d%d", &n, &u, &d);
	    h2 = -1, count = 0, parachute = 0, done = 0;

	    for(int i=0 ; i<n; i++){
	        scanf("%d", &h1);
	        
	        if (!done){
	            if (h2 == -1) h2 = h1;
	        
    	        else{
    	            if (h1 == h2) count++;
    	            else if (h1 > h2 && h1 - h2 <= u) count++;
    	            else if (h1 < h2 && h2 - h1 <= d) count++;
    	            else if (h1 < h2 && h2 - h1 > d && !parachute){
    	                count++;
    	                parachute = 1;
    	            }
    	            else done = 1;
    	            
    	            h2 = h1;
    	            
    	        }
	        }
	        
	    }
	    
	    printf("%d\n", count+1);
	    
	}
	return 0;
}



