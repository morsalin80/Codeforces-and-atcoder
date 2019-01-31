#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
	int arr[] ={4,7,44,47,74,77,444,447,477,474};
	int n;
	while(cin>>n)
    {
        int k = n;
        bool good = true;
        while(n>0)
        {
            if(n%10==4 || n%10==7) n/=10;
            else {good = 0; break;}
        }
        if(!good)
        {
            for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
               // cout << arr[i]<< endl;
                if(k%arr[i]==0) {good = true; break;}
            }
        }
        if(good) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}

