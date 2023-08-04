#include <stdio.h>
#include <string.h>

int main(void) {
    int t, str_len, match, count;
    scanf("%d", &t);
    
    while(t--){
        char s[500001];
        scanf("%s", s);
        str_len = strlen(s), match = 99*104*101*102, count = 0;

        for (int i=0; i<str_len-3; i++){
            if (s[i]*s[i+1]*s[i+2]*s[i+3] == match)
                count++;
        }
        
        if (count)
            printf("lovely %d\n", count);
        else
            printf("normal\n");
        
    }
    
	return 0;
}
