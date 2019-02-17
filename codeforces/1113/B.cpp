#include<bits/stdc++.h>

using namespace std;

#define SET(x) memset(x, 0, sizeof(x))
#define SETBOOL(x) memset(x,false,sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define mp make_pair
#define PII pair<int, int>
#define p printf

#define s scanf

#define ALL(x) x.begin(),x.end()
#define ll long long

#define pb push_back

#define IOS ios::sync_with_stdio(false); cin.tie(0);
#define np std::string::npos

//this fuction sorts vector pair according to first element in descending order.
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first>b.first;
}
bool isprime(int n)
{
    bool b=true;int lim=sqrt(n);
    if(n%2==0) { b=false;return 1;}
    else {
    for(int i=3;i<=lim;i+=2)
    {
        if(n%i==0) {b=false;return 1;}
    }
    }
    if(b) return 0;

}/*
int div(int n)
{
    int lim=sqrt(n);
    int p;
    for(int i=2;i<=lim;i++)
    {
        if(n%i==0)
        {
            p=n/i;
        }
    }
    //cout<<p<<endl;
    return p;
}*/
int main()

{
	IOS;
	int n;
	while(cin>>n)
    {
        vector<int>vec;
        int ager=0,sum=0;
        for(int i=0;i<n;i++) {int x;  cin>>x;ager+=x;vec.pb(x);}
        sort(ALL(vec));
        reverse(ALL(vec));
        int tmp,tmpindex,ans=1000000000;
        sum=ager;
        bool primeGot=false;
        for(int i=0;i<n;i++)
        {
            if(isprime(vec[i]))
            {
                primeGot = true;
                //cout<<vec[i]<<endl;
                int lim=sqrt(vec[i]);
                for(int j=1;j<=lim;j++)
                {
                    if(vec[i]%j==0)
                    {
                        //cout<<"i: "<<j<<endl;
                        sum-=vec[i]-(vec[i]/j);
                        sum+=(vec[vec.size()-1]*j)-vec[vec.size()-1];
                        ans=min(ans,min(sum,ager));
                        sum=ager;
                        //cout<<"Ans1: "<<ans<<endl;
                        if(vec[i]%j==j) continue;
                        sum-=vec[i]-(vec[i]/(vec[i]/j));
                        sum+=(vec[vec.size()-1]*(vec[i]/j))-vec[vec.size()-1];
                        ans=min(ans,min(sum,ager));
                        sum=ager;
                        //cout<<"Ans2: "<<ans<<endl;
                    }
                }
                //cout<<"ans: "<<ans<<endl;
            }
        }
        if(primeGot)
        cout<<ans<<endl;
        else
            cout << ager <<endl;

    }
	 return 0;

}
