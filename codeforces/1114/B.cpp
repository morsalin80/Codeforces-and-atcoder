#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n,m,k;
    while(cin>>n>>m>>k)
    {
        int arr[n];
        vector<int>vec;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            vec.pb(arr[i]);
        }
        ll range = m*k*1ll;
        ll ans=0;
        sort(vec.begin(),vec.end(),greater<int>());
        int last;
        for(int i=0;i<range;i++){
            ans+=vec[i];
          //  cout << vec[i] <<" ";
            last = vec[i];
        }
        int lastc=0;
        for(int i=range-1;i>=0;i--)
        {
            if(vec[i]==last) lastc++;
            else break;
        }
        //cout << last <<endl;
        vector<int> intr;
        int counter=0;
        for(int i=0;i<n;i++)
        {
            int mm=0;
            ll sum=0;
            for(int j=i;j<n;j++)
            {
              //  cout << arr[j] << "<<arr[j]::j>>" <<j <<endl;
                if(arr[j]>=last){if(arr[j]==last){if(lastc>0){lastc--;mm++;}else continue;} else mm++;}
                if(mm>=m){ intr.pb(j+1);sum+=arr[j] ;counter++;i=j;break;}
            }
            //cout << i <<" <<i"<<endl;
            //cout <<"sum: " <<sum <<endl;
            if(counter>=k-1) break;
        }
        cout << ans <<endl;
        for(int i=0;i<intr.size();i++)
            cout << intr[i] << " ";
    }
    return 0;
}
