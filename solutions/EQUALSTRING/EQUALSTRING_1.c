// QUESTION URL: https://www.codechef.com/problems/EQUALSTRING
// STATUS: accepted

#include <stdio.h>

void shift_a(char *a, char *b, int start, int end){
    for (int i=start; i<end; i++){
        if (a[i] != b[i])
            a[i] = b[start];
    }
}

int main(void) {
    int t,n,count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        
        char a[n], b[n];
        count = 0;
        
        scanf("%s", &a);
        scanf("%s", &b);
        
        for(int i=0; i<n; i++){
            if (b[i] != a[i]){
                shift_a(a, b, i, n);
                count++;
            }
        }
        
        printf("%d\n", count);
    }
    
	return 0;
}



