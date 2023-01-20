// QUESTION URL: https://www.codechef.com/problems/SPALNUM
// STATUS: accepted
// TIME: 0.08
// MEMORY: 5.3M

#include <stdio.h>
#include <stdbool.h>

int is_palindrome(int num){
    int value = 0, temp = num;
    
    while(num > 0){
        value = value*10 + (num % 10);
        num /= 10;
    }

    if(value == temp) return true;
    return false;

}

int main(void) {
	int t, l, r;
	long long int total;
	
	scanf("%d", &t);
	
	while(t--){
	    scanf("%d%d", &l, &r);
	    total = 0;
	    
	    for (int i=l; i<=r; i++)
	        if (is_palindrome(i)) total += i;
	        
	    printf("%d\n", total);

	}
	
	return 0;
}



