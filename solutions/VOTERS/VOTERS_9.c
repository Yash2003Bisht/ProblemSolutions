// QUESTION URL: https://www.codechef.com/problems/VOTERS
// STATUS: accepted

#include <stdio.h>

int main(void) {
	int n1,n2,n3,total=0;
	
	scanf("%d %d %d",&n1,&n2,&n3);
	n1+=n2+n3;
	int voters[n1],max=0;
	for(int i=0;i<n1;i++){
	    scanf("%d",&voters[i]);
	    if(max<voters[i]){
	        max=voters[i];
	    }
    }
    int count[max];
    
    for(int i=0;i<max;i++){
        count[i]=0;
    }
    
    for(int i=0;i<n1;i++){
        count[voters[i]]++;
    }
    
    for(int i=0;i<max;i++){
        if(count[i]>1){
            total++;
        }
    }
    
    printf("%d\n",total);
    
    for(int i=0;i<max;i++){
        if(count[i]>1){
            printf("%d\n",i);
        }
    }
    
    return 0;
}

