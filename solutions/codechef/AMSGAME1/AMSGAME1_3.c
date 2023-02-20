// DATE: 09/02/2023, 08:23:07
// PROBLEM NAME: Subtraction Game 1
// PROBLEM URL: https://www.codechef.com/problems/AMSGAME1
// PROBLEM DIFFICULTY RATTING: 1250
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.2M

#include <stdio.h>

unsigned gcd(unsigned x, unsigned y){
    unsigned wk;
    if(x<y){ wk=x;x=y;y=wk; }
    while(y){
        wk = x%y;
        x=y;
        y=wk;
    }
    return x;
}

int gcd_a(int arr[], int size){
    if(size==1) return arr[0];
    if(size==2) return gcd(arr[0], arr[1]);
    int h = size / 2;
    return gcd(gcd_a(&arr[0], h), gcd_a(&arr[h], size - h));
}


int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int a[n], ans;
        
        for (int i=0; i<n; i++) scanf("%d", &a[i]);
        
        ans = gcd_a(a, n);
        
        
        printf("%d\n", ans);
        
    }
    
	return 0;
}



