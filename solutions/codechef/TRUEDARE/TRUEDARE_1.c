// QUESTION URL: https://www.codechef.com/problems/TRUEDARE
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int search(int arr[], int num, int size){
    
    for (int i=0; i<size; i++){
        if (num == arr[i])
            return 0;
    }
    
    return 1;
    
}

int main(void) {
    int t, n, t_size, d_size, value, flag;
    scanf("%d", &t);
    
    while(t--){
        flag = 0;
        
        scanf("%d", &t_size);
        int truth[t_size];
        for (int i=0; i<t_size; i++) 
            scanf("%d", &truth[i]);
        
        scanf("%d", &d_size);
        int dare[d_size];
        for (int i=0; i<d_size; i++) 
            scanf("%d", &dare[i]);
        
        scanf("%d", &n);
        for (int i=0; i<n; i++){
            scanf("%d", &value);
            
            if (!flag)
                flag = search(truth, value, t_size);
            
        }
        
        scanf("%d", &n);
        for (int i=0; i<n; i++){
            scanf("%d", &value);

            if (!flag)
                flag = search(dare, value, d_size);

        }
        
        if (flag) printf("no\n");
        else printf("yes\n");
        
    }
    
	return 0;
}



