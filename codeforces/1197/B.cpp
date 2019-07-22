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
        int mx = 0,mxi=-1;
        f0(n){ cin>>arr[i];
            if(arr[i]>mx){
                mx = arr[i];
                mxi = i;
            }
        }
        //cout << mx << " "<<mxi <<endl;
        vector<int>left,right;
        for(int i=0;i<mxi;i++)
            left.pb(arr[i]);
        for(int i=mxi+1;i<n;i++)
            right.pb(arr[i]);
        /*for(int i=0;i<left.size();i++) cout << left[i] << " ";
        cout << endl;
        for(int i=0;i<right.size();i++) cout << right[i] <<" ";
        cout << endl;*/
        int i=left.size()-1;
        int j=0;
        int top = mx;
        bool ok = true;
        for(;i>=0 && j<right.size();)
        {
            int temp = max(left[i],right[j]);
         //   cout << temp << " "<< top <<endl;
            if(temp>=top) {ok = false; break;}
            else top = temp;
            if(temp==left[i])i--;
            else if(temp==right[j])j++;
        }
       // cout << i << " "<< j <<endl;
        if(ok)
        {
            if(i<0){
            for(;j<right.size();j++)
            {
                if(top<=right[j]) {
                    ok = false;
                    break;
                }
                top = right[j];
            }
            }
            if(j==right.size())
            {
                for(;i>=0;i--)
                {
                    //cout << top <<endl;
                    if(top<=left[i])
                    {
                        ok = false;
                        break;
                    }
                    top = left[i];
                }
            }

        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
