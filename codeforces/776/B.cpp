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
        int arr[n+2];
        for(int i=2;i<n+2;i++) arr[i] = 2;
        arr[2] = 1;
        for(int i=3;i<n+2;i+=2){
            bool prime=true;
            for(int j=2;j<=sqrt(i);j++)
            {
                if(i%j==0) {prime = false; break;}
            }
            if(prime) arr[i] = 1;
        }
        if(n>2)cout << "2\n";
        else cout << "1\n";
        for(int i=2;i<n+2;i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}

