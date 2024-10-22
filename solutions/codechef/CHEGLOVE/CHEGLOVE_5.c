// DATE: 28/09/2022, 06:25:38
// PROBLEM NAME: Chef and Glove
// PROBLEM URL: https://www.codechef.com/problems/CHEGLOVE
// PROBLEM DIFFICULTY RATTING: 1104
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 0M

#include <stdio.h>

int main(void) {
    int t,n,i;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        
        int l[n], g[n], j=0, front=0, both=0, back=0;
        
        for (i=0; i<n*2; i++){
            if (i<n){
                scanf("%d", &l[i]);
            } else{
                scanf("%d", &g[j]);
                j++;
            }
        }
        
        // check both
        for (int i=0; i<n; i++){
            if (g[i] == l[i]){
                both++;
            } else{
                break;
            }
        }
        
        // check front
        for (int i=0; i<n; i++){
            if (g[i] >= l[i]){
                front++;
            } else{
                break;
            }
        }
        
        // check back
        for (int i=0; i<n; i++){
            if (g[i] == l[n-i-1]){
                back++;
            } else{
                break;
            }
        }
        
        if (both==n){
            printf("both\n");
        } else if(front==n){
            printf("front\n");
        } else if(back==n){
            printf("back\n");
        } else{
            printf("none\n");
        }
        
        
    }
	return 0;
}



