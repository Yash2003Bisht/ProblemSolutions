// QUESTION URL: https://www.codechef.com/problems/CFRTEST
// STATUS: accepted
// TIME: 0.04
// MEMORY: 5.3M

#include <stdio.h>

int already_added(int start, int value, int arr[]){
    for (int i=0; i<start; i++){
        if (arr[i] == value){
            return 1;
        }
    }
    return 0;
}

int main(void) {
    int t,n,a,counter;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int arr[n];
        counter = 0;
        
        for (int i=0;  i<n; i++){
            scanf("%d", &a);
            if (counter == 0){
                arr[counter] = a;
                counter++;
            } else{
                if (!already_added(counter, a, arr)){
                    arr[counter] = a;
                    counter++;
                }
            }
        }
        
        printf("%d\n", counter);
        
    }
    
	return 0;
}



