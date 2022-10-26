// QUESTION URL: https://www.codechef.com/problems/CCOOK

#include <stdio.h>

int main(void) {
    int t, s;
    scanf("%d", &t);
    while(t--){
        int count = 0;
        for(int i=0; i<5; i++){
            scanf("%d", &s);
            if (s==1){
                count++;
            }
        }
        
        if(count == 0){
            printf("Beginner\n");
        } else if(count == 1){
            printf("Junior Developer\n");
        } else if(count == 2){
            printf("Middle Developer\n");
        } else if(count == 3){
            printf("Senior Developer\n");
        } else if(count == 4){
            printf("Hacker\n");
        } else{
            printf("Jeff Dean\n");
        }
        

        
    }
	return 0;
}



