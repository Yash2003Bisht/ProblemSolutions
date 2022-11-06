// QUESTION URL: https://www.codechef.com/problems/FRGAME
// STATUS: accepted

#include <bits/stdc++.h>
using namespace std;

void myfun()
{
	int nitin,sobhagya,ritik,satyarth;
	cin>>nitin>>sobhagya>>ritik>>satyarth;
	if(sobhagya>nitin)
	{
		nitin+=ritik;
	}
	else
	{
		sobhagya+=ritik;
	}
	if(sobhagya>nitin)
	{
		nitin+=satyarth;
	}
	else
	{
		sobhagya+=satyarth;
	}
	if(sobhagya>nitin)
	{
		cout<<"S\n";
	}
	else
	{
		cout<<"N\n";
	}
}
 
int main()
{
	int t=1;
	cin>>t;
	while(t--)
	myfun();
	return 0;
}


