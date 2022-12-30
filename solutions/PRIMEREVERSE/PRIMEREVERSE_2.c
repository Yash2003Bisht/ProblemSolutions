// QUESTION URL: https://www.codechef.com/problems/PRIMEREVERSE
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char a[n+1], b[n+1];
        int counter[2] = {0};
        scanf("%s", a);
        scanf("%s", b);

        for (int i=0; i<n; i++){
            if (a[i] == '0') counter[0]++;
            if (b[i] == '0') counter[1]++;
        }
        
        if (counter[0] == counter[1]) printf("YES\n");
        else printf("NO\n");

    }
	return 0;
}



