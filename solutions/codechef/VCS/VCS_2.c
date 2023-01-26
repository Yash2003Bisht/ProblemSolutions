// QUESTION URL: https://www.codechef.com/problems/VCS
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.1M

#include <stdio.h>

int search(int value, int size, int arr[]){
    for (int i=0; i<size; i++){
        if (arr[i] == value) return 1;
    }
    return 0;
}

int main(void) {
    int t, n, m, k;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &n, &m, &k);
        int a[m], b[k], ti = 0;
        
        for (int i=0; i<m; i++) scanf("%d", &a[i]);
        for (int i=0; i<k; i++) scanf("%d", &b[i]);
        
        // tracked and ignored
        for (int i=0; i<m; i++) if (search(a[i], k, b)) ti++;
        
        printf("%d %d\n", ti, n - (m + k - ti));
        
    }

	return 0;
}



