#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
	int n,k,d,i,q,r;
	while(cin>>n>>k){
	d=2*k+1;
	q=n/d;
	r=n%d;
	//cout << r << endl;
	if(r!=0){
      //  cout << "r!=0 :"<< r<<endl;
		q++;
	}
	else{
        //cout << "previous r: "<< r <<endl;
		r=2*k;
        //cout << "after r: "<< r <<endl;
	}
	cout<<q<<endl;
	//cout << "1+r/2: "<< 1+r/2 << " d: "<< d <<endl;
	for(i=1+r/2;i<=n;i+=d)
		cout<<i<<" ";
	}
	return 0;
}
