// DATE: 20/04/2023, 07:15:42
// PROBLEM NAME: Chef in Heaven 
// PROBLEM URL: https://www.codechef.com/problems/CCHEAVEN
// PROBLEM DIFFICULTY RATTING: 1317
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, l, count_0, count_1, flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &l);
        char s[l+1];
        scanf("%s", &s);
        count_0 = 0, count_1 = 0, flag = 0;
        
        for (int i=0; s[i] != '\0'; i++){
            if (s[i] == '0')
                count_0++;
            else
                count_1++;
            
            if ((count_1*100)/(count_0+count_1) >= 50){
                flag = 1;
                break;
            }    

        }
        
        if (flag)
            printf("YES\n");
        else
            printf("NO\n");

    }
    
	return 0;
}



