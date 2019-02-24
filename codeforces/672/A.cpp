#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
	string s ="";
	int n = 1;
	while(s.size()<1000) s+=to_string(n++);
	int l;
	while(cin>>l)
    {
        cout << s[l-1] <<endl;
    }
    return 0;
}

