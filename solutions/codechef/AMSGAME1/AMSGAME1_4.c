// DATE: 09/02/2023, 08:02:54
// PROBLEM NAME: Subtraction Game 1
// PROBLEM URL: https://www.codechef.com/problems/AMSGAME1
// PROBLEM DIFFICULTY RATTING: 1250
// STATUS: time limit exceeded
// TIME: -
// MEMORY: 5.4M

#include <stdio.h>
#include <limits.h>

int make_equal(int a, int b){
    while (a != b){
        if (a > b){
            a = a - b;
        } else {
            b = b - a;
        }
    }
    
    return a;
    
}

int all_equal(int arr[], int size){
	for (int i=0; i<size-1; i++){
		if (arr[i] != arr[i+1]) return 0;
	}
	return 1;
}

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int a[n], ans;
        
        for (int i=0; i<n; i++) scanf("%d", &a[i]);
        
        while(!all_equal(a, n)){
			for (int i=0; i<n-1; i++){
				if (a[i] != a[i+1]){
					ans = make_equal(a[i], a[i+1]);
					if (a[i] > a[i+1]) a[i] = ans;
					else a[i+1] = ans;
				}
			}
        }
        
        printf("%d\n", a[0]);
        
    }
    
	return 0;
}



