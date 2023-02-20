// DATE: 09/11/2022, 07:13:22
// PROBLEM NAME: Equal Strings
// PROBLEM URL: https://www.codechef.com/problems/EQUALSTRING
// PROBLEM DIFFICULTY RATTING: 1092
// STATUS: wrong answer
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>

int is_added(char* x, char y){
    for (int i=0; x[i] != '\0'; i++){
        if (x[i] == y){
            return 1;
        }
    }
    return 0;
}

int main(void) {
    int t,n,count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        
        char a[n+1], b[n+1], c[n+1];
        count = 0;
        
        scanf("%s", &a);
        scanf("%s", &b);
        
        for(int i=0; i<n; i++){
            if (b[i] != a[i] && !is_added(c, b[i])){
                c[count] = b[i];
                count++;
            }
        }
        
        printf("%d\n", count);
        
    }
    
	return 0;
}



