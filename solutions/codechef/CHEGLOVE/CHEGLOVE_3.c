// QUESTION URL: https://www.codechef.com/problems/CHEGLOVE
// STATUS: accepted
// TIME: 0.27
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t,n,i;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        
        int l[n], g[n], j=0, front=0, back=0;
        
        for (i=0; i<n*2; i++){
            if (i<n){
                scanf("%d", &l[i]);
            } else{
                scanf("%d", &g[j]);
                j++;
            }
        }
        
        // check front
        for (int i=0; i<n; i++){
            if (g[i] >= l[i]){
                front = 1;
            } else{
                front = 0;
                break;
            }
        }
        
        // check back
        for (int i=0; i<n; i++){
            if (g[i] >= l[n-i-1]){
                back = 1;
            } else{
                back = 0;
                break;
            }
        }
        
        if (front && back == 0){
            printf("front\n");
        } else if(back && front == 0){
            printf("back\n");
        } else if(back && front){
            printf("both\n");
        } else{
            printf("none\n");
        }
        
        
    }
	return 0;
}



