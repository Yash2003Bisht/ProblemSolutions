// DATE: 07/11/2023, 09:06:35
// PROBLEM NAME: Turbo Sort
// PROBLEM URL: https://www.codechef.com/problems/TSORT
// PROBLEM DIFFICULTY RATTING: 667
// STATUS: accepted
// TIME: 1.39
// MEMORY: 6.8M

#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	vector <int> a(t);
	for(int i = 0; i< t ; i++){
	    cin>>a[i];
	}
	sort(a.begin(),a.end());
	for(int x : a)
	    cout<<x<<endl;
	return 0;
}






