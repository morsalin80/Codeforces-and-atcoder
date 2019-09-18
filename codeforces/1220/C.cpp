#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    string s;
    while(cin>>s)
    {
        int l = s.size();
        int arr[l];
        ms(arr);
        char x = s[0];
        for(int i=1;i<l;i++)
        {
            if(s[i]>x) arr[i] = 1;
            else
                x = s[i];
        }
        for(int i=0;i<l;i++)
        {
            if(arr[i]==0) cout << "Mike\n";
            else cout << "Ann\n";
        }
    }
    return 0;
}

