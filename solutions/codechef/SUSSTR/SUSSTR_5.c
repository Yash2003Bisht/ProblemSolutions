// DATE: 01/02/2023, 08:08:36
// PROBLEM NAME: Suspense String
// PROBLEM URL: https://www.codechef.com/problems/SUSSTR
// PROBLEM DIFFICULTY RATTING: 1239
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.4M

#include <stdio.h>
#include <string.h>

void add_value(char value, char player, char s_arr[]){
    int size =strlen(s_arr);
    if (value == '0'){
        if (player == 'a'){
            for (int i=0; s_arr[i] != '\0'; i++){
                s_arr[size-i] = s_arr[size-1-i];
            }
            s_arr[0] = value;
        } else{
            s_arr[size] = value;
        }
    } else{
        if (player == 'a'){
            s_arr[size] = value;
        } else{
            for (int i=0; s_arr[i] != '\0'; i++){
                s_arr[size-i] = s_arr[size-1-i];
            }
            s_arr[0] = value;
        }
    }
}

int main(void) {
    int t, n, temp;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char s[1001] = {'\0'}, new_s[1001] = {'\0'}, value, name;
        temp = 0;
        scanf("%s", s);
        
        for (int i=0; i<n; i++){
            if (i%2 == 0){
                value = s[temp];
                name = 'a';  // alice
                temp += 1;
            } else {
                value = s[n-temp];
                name = 'b';  // bob
            }
            
            add_value(value, name, new_s);
        
        }
        
        printf("%s\n", new_s);
        

    }
    
	return 0;
}



