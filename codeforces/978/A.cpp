#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ins insert
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n;

    while(cin>>n)
    {
        int arr[1001] = {0};
        vector<int> v1,v2;
        int in;
        for(int i=0;i<n;i++)
        {
            cin>>in;
            v1.pb(in);
        }
        reverse(v1.begin(),v1.end());
        for(int i=0;i<v1.size();i++)
        {
            if(arr[v1[i]]==0) {v2.pb(v1[i]); arr[v1[i]] = 1;}
        }
        reverse(v2.begin(),v2.end());
        cout << v2.size()<<endl;
        for(int i=0;i<v2.size();i++)
            cout << v2[i] << " ";
        cout << endl;
    }
    return 0;
}

