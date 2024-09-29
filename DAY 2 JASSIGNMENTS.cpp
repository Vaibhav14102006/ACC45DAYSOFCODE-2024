#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t, a, tatal=0;
	cin>>t;
	while(t-->0){
	    cin>>a;
	    tatal=10-a;
	    if(tatal>=3)
	    {
	        cout<<"YES"<<endl;
	    }else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;

}
