// QUESTION URL: https://www.codechef.com/problems/BSCOST

#include <stdio.h>

int is_exists(char * arr, int size, char find){
    for (int i=0; i<size; i++){
        if (arr[i] == find){
            return 1;
        }
    }
    return 0;
}

int main(void) {
    int t,n,x,y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &n,&x,&y);
        
        char s[n];
        scanf("%s", s);
        
        if(!is_exists(s, n, '0') || !is_exists(s, n, '1')){
            printf("%d\n", 0);
        } else if (x > y){
            printf("%d\n", y);
        } else{
            printf("%d\n", x);
        }
        
    }
    
	return 0;
}



