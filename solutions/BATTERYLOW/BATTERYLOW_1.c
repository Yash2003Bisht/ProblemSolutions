// QUESTION URL: https://www.codechef.com/problems/BATTERYLOW

#include <stdio.h>

int main(void) {
	// your code goes here
	int t, b;
	scanf("%d", &t);
	while (t--){
	    scanf("%d", &b);
	    if (b <= 15){
	        printf("YES\n");
	    } else{
	        printf("NO\n");
	    }
	}
	return 0;
}



