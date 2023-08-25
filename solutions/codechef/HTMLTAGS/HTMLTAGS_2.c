// DATE: 25/08/2023, 07:40:15
// PROBLEM NAME: HTML Tags
// PROBLEM URL: https://www.codechef.com/problems/HTMLTAGS
// PROBLEM DIFFICULTY RATTING: 1441
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, i, flag;
    char tag[1001];
    scanf("%d", &t);
    
    while(t--){
        scanf("%s", tag);
        flag = 1;
        
        if (tag[0] != '<' || tag[1] != '/')
            flag = 0;
        else if (tag[2] == '>' || tag[2] == '\0')
            flag = 0;
        else{
            for (i=2; tag[i] != '>' && tag[i] != '\0'; i++){
                if (tag[i] < 48 || (tag[i] > 57 && tag[i] < 97) || tag[i] > 122){
                    flag = 0;
                    break;
                }
            }
        }
        
        if (flag && tag[i] != '>')
            flag = 0;

        if (flag)
            printf("Success\n");
        else
            printf("Error\n");
        
    }
    
	return 0;
}



