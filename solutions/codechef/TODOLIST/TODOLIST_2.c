// DATE: 18/08/2023, 09:07:47
// PROBLEM NAME: Problems in your to-do list
// PROBLEM URL: https://www.codechef.com/problems/TODOLIST
// PROBLEM DIFFICULTY RATTING: 580
// STATUS: accepted
// TIME: 0.07
// MEMORY: 1.5M

#include <stdio.h>

int main(void) {
    int t, n, d, removed;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        removed = 0;
        
        for (int i=0; i<n; i++){
            scanf("%d", &d);
            
            if (d >= 1000)
                removed++;
        }
        
        printf("%d\n", removed);
        
    }
    
	return 0;
}



