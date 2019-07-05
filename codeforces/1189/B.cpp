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
    int n;
    while(cin>>n)
    {
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        bool ok = true;
        list<int>ls;
        list<int>::iterator it;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
                ls.pb(arr[i]);
            else
                ls.push_front(arr[i]);
        }
        int ar[n];
        int i=0;
        for(it=ls.begin();it!=ls.end();it++,i++){
            ar[i] = (*it);
        }
                for(int i=0;i<n;i++)
        {
            if(i==0 )
            {
                if(ar[i]>=ar[i+1]+ar[n-1])
                {
                    ok = false;
                    break;
                }
            }
            else if(i==n-1)
            {
                if(ar[i]>=ar[i-1]+ar[0])
                {
                    ok = false;
                    break;
                }
            }
            else
            {
                if(ar[i]>=ar[i-1]+ar[i+1])
                {
                    ok = false;
                    break;
                }
            }

        }
        if(!ok)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            for(int i=0;i<n;i++)
                cout << ar[i]<< " ";
            cout <<endl;
        }

    }
    return 0;
}

