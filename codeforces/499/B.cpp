#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int n,m;
    while(cin>>n>>m){
        string a[m];
        string b[m];
        string c[n];
        for(int i=0;i<m;i++)
        {
            cin>>a[i]>>b[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>c[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(c[i]==a[j])
                {
                    if(c[i].length()>b[j].length())
                        cout << b[j] << " ";
                    else
                        cout << c[i] << " ";
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
