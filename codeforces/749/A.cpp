#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n;
    while(cin>>n)
    {
        cout << n/2<<endl;
        int l=n/2;
        for(int i=0;i<(n/2)-1;i++)cout << "2 ";
        if(n%2!=0) cout<<"3";
        else cout << "2";
        cout << endl;
    }
    return 0;
}

