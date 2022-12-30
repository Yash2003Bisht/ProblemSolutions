// QUESTION URL: https://www.codechef.com/problems/LONGSEQ
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, count_1, count_0;
    char d[100001];
    
    scanf("%d", &t);
    
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



