// DATE: 22/10/2022, 07:51:33
// PROBLEM NAME: Minimise LCS
// PROBLEM URL: https://www.codechef.com/problems/MINLCS
// PROBLEM DIFFICULTY RATTING: 1367
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>
#include <stdlib.h>
#define min(a, b)(a>b?b:a)
#define max(a, b)(a>b?a:b)

int main(void) {
    int t, n, _max, counter;
    
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        
        int arr1[26] = {0}, arr2[26] = {0};
        char a[n+1], b[n+1];
        _max = 0;
        
        
        scanf("%s", a);
        scanf("%s", b);
        
        for (int i=0; i<n; i++){
            arr1[a[i] - 'a']++;
            arr2[b[i] - 'a']++;
        }
        
        for (int i=0; i<26; i++){
            counter = min(arr1[i], arr2[i]);
            _max = max(_max, counter);
        }
        
        printf("%d\n", _max);
        
    }
	return 0;
}

