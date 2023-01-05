// QUESTION URL: https://www.codechef.com/problems/HILLS
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
	int t, n, u, d, parachute, count;
	scanf("%d", &t);
	
	while(t--){
	    scanf("%d%d%d", &n, &u, &d);
	    int h[n];
	    count = 0, parachute = 0;

	    for (int i=0; i<n; i++) scanf("%d", &h[i]);
	    
	    for (int i=0; i<n-1; i++){
	        if (h[i] == h[i+1]) count++;
	        else if (h[i] < h[i+1] && h[i+1] - h[i] <= u) count++;
	        else if (h[i] > h[i+1] && h[i] - h[i+1] <= d) count++;
	        else if (h[i] > h[i+1] && h[i] - h[i+1] > d && !parachute){
                count++;
                parachute = 1;
	        }
	        else break;
	    }
	    
	    printf("%d\n", count+1);


	}
	return 0;
}



