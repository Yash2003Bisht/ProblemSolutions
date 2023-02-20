// DATE: 28/09/2022, 06:42:14
// PROBLEM NAME: Chef and Glove
// PROBLEM URL: https://www.codechef.com/problems/CHEGLOVE
// PROBLEM DIFFICULTY RATTING: 1104
// STATUS: accepted
// TIME: 0.27
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t,n,i;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        
        int l[n], g[n], j=0, k=n-1, front=0, back=0;
        
        for (i=0; i<n*2; i++){
            if (i<n){
                scanf("%d", &l[i]);
            } else{
                scanf("%d", &g[j]);
                if (g[j] >= l[j]){
                    front++;
                }
                if (g[j] >= l[k]){
                    back++;
                    k--;
                }
                j++;
            }
        }
        
        if (front==n && back==n){
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



