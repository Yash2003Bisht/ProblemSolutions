// DATE: 20/01/2023, 07:26:55
// PROBLEM NAME: Sum of palindromic numbers
// PROBLEM URL: https://www.codechef.com/problems/SPALNUM
// PROBLEM DIFFICULTY RATTING: 1230
// STATUS: accepted
// TIME: 0.08
// MEMORY: 5.1M

#include <stdio.h>

int is_palindrome(int num){
    int value = 0, temp = num;
    
    while(num > 0){
        value = value*10 + (num % 10);
        num /= 10;
    }

    return value == temp;

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



