// DATE: 05/10/2023, 08:14:43
// PROBLEM NAME: Harrenhal
// PROBLEM URL: https://www.codechef.com/problems/HHAL
// PROBLEM DIFFICULTY RATTING: 1495
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>
#include <string.h>

int is_palindrome(char* h){
    int size = strlen(h), n = size / 2;

    for (int i=0; i<n; i++){
        if (h[i] != h[size - i - 1])
            return 0;
    }

    return 1;

}

int main(void) {
    int t;
    scanf("%d", &t);
    
    while(t--){
        char h[100001];
        scanf("%s", h);
        
        if (is_palindrome(h))
            printf("1\n");
        else
            printf("2\n");

    }
    
	return 0;
}



