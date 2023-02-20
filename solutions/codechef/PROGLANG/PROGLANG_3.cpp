// DATE: 20/08/2022, 01:10:13
// PROBLEM NAME: Programming Languages
// PROBLEM URL: https://www.codechef.com/problems/PROGLANG
// PROBLEM DIFFICULTY RATTING: 1001
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.1M

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,a1,a2,b,b1,b2;
        cin>>a>>b>>a1>>b1>>a2>>b2;
        if((a==a1 || a==b1) && (b==a1 || b==b1))
            cout<<1<<endl;
        else if((a==a2 || a==b2) && (b==a2 || b==b2))
            cout<<2<<endl;
        else{
            cout<<0<<endl;
        }
    }
    
	return 0;
}

