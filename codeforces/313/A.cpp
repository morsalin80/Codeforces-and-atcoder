#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n;
    while(cin>>n)
    {
        if(n>=0) cout << n <<endl;
        else{
            int ekok ,doshok;
            n=abs(n);
            ekok = (n%10);
            doshok = (n%100);
            doshok/=10;
            int bos;
            int maxx = max(ekok,doshok);
           // cout << maxx <<endl;
            if(maxx==ekok) maxx=10;
            else maxx= 100;
            //cout << maxx <<endl;
            n= n/maxx;
            //cout<< n <<endl;
            if(n==0&& ekok==0) cout <<0<<endl;
            else if(maxx==100 && n!=0)
            cout <<"-"<<n<<ekok<<endl;
            else if(maxx==100 && n==0) cout <<"-"<<ekok <<endl;
            else if(maxx==10 ) cout <<"-"<<n<<endl;
            //else if(maxx==10 && n==0 && doshok==0) cout <<ekok <<endl;
           // else if(maxx==10 && doshok==0 && n!=0) cout << "-" <<n<<endl;
        }
    }
    return 0;
}
