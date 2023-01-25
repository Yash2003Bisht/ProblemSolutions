// QUESTION URL: https://www.codechef.com/problems/DISTCODE
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, counter, temp1, temp2;
    char s[10001];
    
    scanf("%d", &t);
    
    while(t--){
        scanf("%s", s);
        int arr[26][26] = {0};
        counter = 0;
        
        for (int i=0; s[i+1] != '\0'; i++){
            temp1 = s[i] - 65;
            temp2 = s[i+1] - 65;
            arr[temp1][temp2]++;
        }

        for (int i=0; i<26; i++){
            for (int j=0; j<26; j++){
                if (arr[i][j] >= 1) counter++;
            }
        }

        printf("%d\n", counter);

    }
    
	return 0;
}



