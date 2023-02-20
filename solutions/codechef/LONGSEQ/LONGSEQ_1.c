// DATE: 30/12/2022, 06:53:28
// PROBLEM NAME: Chef and digits of a number
// PROBLEM URL: https://www.codechef.com/problems/LONGSEQ
// PROBLEM DIFFICULTY RATTING: 1209
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

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
    int t, count_1, count_0;
    char d[100001];
    
    scanint(&t);
    
    while(t--){
        scanf("%s", &d);
        count_1 = 0, count_0 = 0;
        
        for (int i=0; d[i] != '\0'; i++){
            if (d[i] == '1') count_1++;
            else count_0++;
        }
        
        if (count_1 == 1 || count_0 == 1) printf("Yes\n");
        else printf("No\n");
        
    }
	return 0;
}



