// DATE: 01/11/2022, 06:52:27
// PROBLEM NAME: Binary String Cost
// PROBLEM URL: https://www.codechef.com/problems/BSCOST
// PROBLEM DIFFICULTY RATTING: 1069
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#include <stdlib.h>

int is_exists(char * arr, char find){
    for (int i=0; arr[i] != '\0'; i++){
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
        
        s = (char *) malloc((n+1)*sizeof(char));
        scanf("%s", s);
        
        if(!is_exists(s, '0') || !is_exists(s, '1')) printf("%d\n", 0);
        else if (x > y) printf("%d\n", y);
        else printf("%d\n", x);
        
    }
    
	return 0;
}



