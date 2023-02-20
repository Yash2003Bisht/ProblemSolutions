// DATE: 16/11/2022, 06:40:59
// PROBLEM NAME: Chef and Strings
// PROBLEM URL: https://www.codechef.com/problems/CHEFSTR1
// PROBLEM DIFFICULTY RATTING: 1094
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.1M

#include <stdio.h>

inline void scanint(long long *x) { 
	register char c = getchar_unlocked(); 
	*x = 0; 
	for(; (c<48)||(c>57);c = getchar_unlocked()); 
	for(; (c>47)&&(c<58);c = getchar_unlocked()) 
		*x = (int)((((*x)<<1) + ((*x)<<3)) + c - 48); 
}

inline void printint(long long n) { 
	if(n == 0) 
	{ 
		putchar_unlocked('0'); 
		putchar_unlocked('\n'); 
	} 
	else if(n == -1) 
	{ 
		putchar_unlocked('-'); 
		putchar_unlocked('1'); 
		putchar_unlocked('\n'); 
	} 
	else 
	{ 
		char buf[11]; 
		buf[10] = '\n'; 
		int i = 9; 
		while(n) 
		{ 
			buf[i--] = n % 10 + '0'; 
			n /= 10; 
		} 
		while(buf[i] != '\n') 
			putchar_unlocked(buf[++i]); 
	} 
} 

int main(void) {
    int t, n;
    scanint(&t);
    
    while(t--){
        scanint(&n);
        long long int s[n], total=0;
        
        for (int i=0; i<n; i++)
            scanint(&s[i]);
            
        for (int i=0; i<n-1; i++){
            total += s[i+1]>s[i]?s[i+1]-s[i]-1:s[i]-s[i+1]-1;
        }
        
        printint(total);
        
    }
    
	return 0;
}



