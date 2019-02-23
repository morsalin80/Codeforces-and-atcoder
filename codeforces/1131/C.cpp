#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n;
    while(cin>>n)
    {
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        vector<int> vec1,vec2;
        for(int i=0;i<n-1;i++)
        {
            if(i%2==0) vec1.pb(arr[i]);
            else vec2.pb(arr[i]);
        }
        for(int i=0;i<vec1.size();i++)
            cout << vec1[i] << " ";
        cout << arr[n-1]<< " ";
        for(int i=vec2.size()-1;i>=0;i--)
            cout << vec2[i] << " ";
        cout << endl;
    }
    return 0;
}

