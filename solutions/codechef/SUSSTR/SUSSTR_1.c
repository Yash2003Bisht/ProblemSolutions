// QUESTION URL: https://www.codechef.com/problems/SUSSTR
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, right, left;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char s[n+1], new_s[(n*2)+1];
        right = n, left = n;
        scanf("%s", s);

        for (int i=0; i<n/2; ++i){
            // front
            if (left == right) new_s[left] = s[i];
            else if (s[i] == '0') new_s[--left] = s[i];
            else new_s[++right] = s[i];
            
            // back
            if (s[n - i - 1] == '0') new_s[++right] = s[n - i - 1];
            else new_s[--left] = s[n - i - 1];
        }

        if (n%2 != 0){
            if (left == right) new_s[left] = s[n/2];
            else if (s[n/2] == '0') new_s[--left] = s[n/2];
            else new_s[++right] = s[n/2];
        }

        new_s[++right] = '\0';

        printf("%s\n", new_s + left);
        

    }
    
	return 0;
}



