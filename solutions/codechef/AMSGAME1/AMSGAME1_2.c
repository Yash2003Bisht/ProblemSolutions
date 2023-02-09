// QUESTION URL: https://www.codechef.com/problems/AMSGAME1
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.2M

#include <stdio.h>

inline void scanint(long long *x) { 
	register char c = getchar_unlocked(); 
	*x = 0; 
	for(; (c<48)||(c>57);
	    c = getchar_unlocked()); 
	for(; (c>47)&&(c<58); c = getchar_unlocked())
		*x = (int)((((*x)<<1) + ((*x)<<3)) + c - 48); 
}

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
    scanint(&t);
    
    while(t--){
        scanint(&n);
        int a[n], ans;
        
        for (int i=0; i<n; i++) scanint(&a[i]);
        
        ans = gcd_a(a, n);
        
        
        printf("%d\n", ans);
        
    }
    
	return 0;
}



