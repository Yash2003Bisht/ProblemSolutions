// QUESTION URL: https://www.codechef.com/problems/CHEFSTUD
// STATUS: accepted

#include <stdio.h>
#include <string.h>

int main(void) {
    int t;
    char s[100000];
    scanf("%d", &t);
    while(t--){
        scanf("%s",&s);
        int s_len = strlen(s);
        int pairs = 0;
        for (int i=0; i<s_len-1; i++){
            if (s[i]=='<' && s[i+1]=='>'){
                pairs++;
            }
        }
        printf("%d\n", pairs);
    }
	return 0;
}



