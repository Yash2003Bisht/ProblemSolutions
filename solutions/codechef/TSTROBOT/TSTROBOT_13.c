// DATE: 16/09/2022, 06:57:01
// PROBLEM NAME: Testing Robot
// PROBLEM URL: https://www.codechef.com/problems/TSTROBOT
// PROBLEM DIFFICULTY RATTING: 1124
// STATUS: runtime error(SIGSEGV)
// TIME: 0.00
// MEMORY: 0M

#include <stdio.h>
int add[10];
int counter = 1;

int added(int n){
    int r=0;
    for (int i=0; i<10; i++){
        if (add[i] == n){
            r=1;
            break;
        }
    }
    if (!r){
        add[counter] = n;
        counter++;
    }
    return r;
}

int main(void) {
    int t,n,x;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&x);
        char s[n];
        int d = 1;
        add[0] = x;
        scanf("%s",&s);
        for(int i=0; i<n; i++){
            if (s[i] == 'R'){
                d += added(++x)?0:1;;
            } else{
                d += added(--x)?0:1;
            }
        }
        printf("%d\n",d);
    }
	return 0;
}



