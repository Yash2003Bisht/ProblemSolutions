// QUESTION URL: https://www.codechef.com/problems/TSTROBOT
// STATUS: accepted

#include <stdio.h>
int add[5000];
int counter = 1;

int added(int n){
    int r=0;
    for (int i=0; i<5000; i++){
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



