// QUESTION URL: https://www.codechef.com/problems/FRIEZA

#include <stdio.h>

char name[] = {'f', 'r', 'i', 'e', 'z', 'a'};

char bad_or_good(char s){
    for (int i=0; i<6; i++){
        if (name[i] == s){
            return 'g';
        }
    }
    return 'b';
}

int main(void) {
    int t, count, s_len;
    char s[1000001], s_type;
    
    scanf("%d", &t);
    
    while(t--){
        scanf("%s", &s);
        s_type = 'n';
        count = 0;
        s_len = strlen(s);
        
        for (int i=0; i<s_len; i++){
            if (s_type == 'n'){
                s_type = bad_or_good(s[i]);
                count++;
                continue;
            } else if(s_type == bad_or_good(s[i])){
                count++;
            } else{
                printf("%d", count);
                count = 1;
                s_type = bad_or_good(s[i]);
            }
        }
        printf("%d\n", count);
        
    }
	return 0;
}



