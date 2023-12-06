// DATE: 06/12/2023, 09:14:48
// PROBLEM NAME: Economics Class
// PROBLEM URL: https://www.codechef.com/problems/ECOCLASS
// PROBLEM DIFFICULTY RATTING: 787
// STATUS: accepted
// TIME: 0.00
// MEMORY: 3.5M

#include <iostream>
using namespace std;

int main() {
    int t, n, count, size;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int s[n], d[n];
        count = 0, size = n*2;

        for (int i=0; i<size; i++){
            if (i < n)
                scanf("%d", &s[i]);
            else
                scanf("%d", &d[i - n]);
        }

        for (int i=0; i<n; i++){
            if (s[i] == d[i])
                count++;
        }

        printf("%d\n", count);

    }
    
	return 0;
}


