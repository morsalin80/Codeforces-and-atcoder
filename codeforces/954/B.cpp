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
        string s;
        cin>>s;
        vector<int>vec;
            for(int j=0+1;j<n;j++)
            {
                if((n-j)>=(j-0))
                {
                    string ss = s.substr(0,j-0);
                    string sss = s.substr(j,j-0);
                    //cout << ss << " "<<sss<<endl;
                    if(ss==sss)
                       vec.pb(j-0);
                }
            }
        //for(int i=0;i<vec.size();i++)cout << vec[i] << " ";
        if(vec.empty())
            cout << n<<endl;
        else
        {
            sort(vec.begin(),vec.end(),greater<int>());
            cout <<(vec[0]+1) + (n-2*vec[0])<<endl;
        }
    }
    return 0;
}
