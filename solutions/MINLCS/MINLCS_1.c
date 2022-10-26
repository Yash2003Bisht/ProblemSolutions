// QUESTION URL: https://www.codechef.com/problems/MINLCS

#include <stdio.h>
#include <stdlib.h>
#define min(a, b)(a>b?b:a)
#define max(a, b)(a>b?a:b)

int main(void) {
    int t, n, _max, counter;
    char *a, *b;
    
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        
        int arr1[26] = {0}, arr2[26] = {0};
        a = (char *) malloc((n+1) * sizeof(char));
        b = (char *) malloc((n+1) * sizeof(char));
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

