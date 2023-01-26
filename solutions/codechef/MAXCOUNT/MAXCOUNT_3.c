// QUESTION URL: https://www.codechef.com/problems/MAXCOUNT
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t,n,i,j,*a,count,value,max_count;
    scanf("%d", &t);
    while (t--){
        scanf("%d", &n);
        a = (int*) malloc(sizeof(int)*n);
        for (i=0; i<n; i++){
            scanf("%d", &a[i]);
        }
        
        value = 0;
        max_count = 0;
        for (i=0; i<n; i++){
            count = 0;
            for (j=0; j<n; j++){
                if (a[i] == a[j]){
                    count++;
                }
            }
            
            if (count >= max_count && count > 1){
                max_count = count;
                value = value > a[i] || value == 0 ? a[i] : value;
            }
        }
        
        printf("%d %d\n", value, max_count);
        
        
    }
	return 0;
}



