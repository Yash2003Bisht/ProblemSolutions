// DATE: 05/04/2023, 03:02:31
// PROBLEM NAME: Isolation Centers
// PROBLEM URL: https://www.codechef.com/problems/CORUS
// PROBLEM DIFFICULTY RATTING: 1305
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, n, q;
    long long c, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &q);
        char s[n+1];
        int arr[26] = {0};
        scanf("%s", s);
        
        for (int i=0; i<n; i++)
            arr[s[i] - 97]++;
        
        for (int i=0; i<q; i++){
            scanf("%lld", &c);
            count = 0;

            for (int j=0; j<26; j++){
                if (c < arr[j])
                    count += arr[j] - c;
            }

            printf("%lld\n", count);
            
        }
        
    }
    
	return 0;
}



