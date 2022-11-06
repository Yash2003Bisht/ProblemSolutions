// QUESTION URL: https://www.codechef.com/problems/BSCOST
// STATUS: wrong answer

#include <stdio.h>
#include <stdlib.h>

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
    char* s;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &n,&x,&y);
        
        s = (char *) malloc(n*sizeof(char));
        scanf("%s", s);
        
        if(!is_exists(s, n, '0') || !is_exists(s, n, '1'))
            printf("%d\n", 0);
        else if (x > y)
            printf("%d\n", y);
        else
            printf("%d\n", n);
        
    }
    
	return 0;
}



