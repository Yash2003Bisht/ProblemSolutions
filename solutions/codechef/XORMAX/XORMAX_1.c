// QUESTION URL: https://www.codechef.com/problems/XORMAX
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>
#define MIN(a, b)(a>b?b:a)

inline void scanint(long long *x) { 
	register char c = getchar_unlocked(); 
	*x = 0; 
	for(; (c<48)||(c>57);
	    c = getchar_unlocked()); 
	for(; (c>47)&&(c<58); c = getchar_unlocked())
		*x = (int)((((*x)<<1) + ((*x)<<3)) + c - 48); 
}

int main(void) {
    int t, total_0, total_1, min_value;
    scanint(&t);

    while(t--){
        char a[500001], b[500001];
        scanf("%s", &a);
        scanf("%s", &b);
        total_0 = 0;
        total_1 = 0;

        for (int i=0; a[i] != '\0'; i++){
            // for a
            if (a[i] == '0') total_0++;
            else total_1++;

            // for b
            if (b[i] == '0') total_0++;
            else total_1++;
        }

        min_value = MIN(total_0, total_1);

        for (int i=0; i<min_value; i++) printf("1");
        for (int i=min_value; a[i] != '\0'; i++) printf("0");
        printf("\n");


    }

	return 0;
}


