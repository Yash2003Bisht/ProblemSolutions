// DATE: 31/01/2023, 07:36:16
// PROBLEM NAME: Chef and His Apartment Dues
// PROBLEM URL: https://www.codechef.com/problems/CHEFAPAR
// PROBLEM DIFFICULTY RATTING: 1238
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.4M

#include <stdio.h>

inline void scanint(long long *x) { 
	register char c = getchar_unlocked(); 
	*x = 0; 
	for(; (c<48)||(c>57);
	    c = getchar_unlocked()); 
	for(; (c>47)&&(c<58); c = getchar_unlocked())
		*x = (int)((((*x)<<1) + ((*x)<<3)) + c - 48); 
}

int main(void) {
    int t, n, a, amount, flag;
    scanint(&t);
    
    while(t--){
        scanint(&n);
        amount = 0, flag = 0;

        for (int i=0; i<n; i++){
            scanint(&a);
            
            if(a == 0){
                amount += 1100;
                flag = 1;
            } else if (flag) amount += 100;

        }
        
        printf("%d\n", amount);
        
    }
    
	return 0;
}



