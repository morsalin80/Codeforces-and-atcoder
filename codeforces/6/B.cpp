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
    int n,m;
    char p;
    while(cin>>n>>m>>p)
    {
        char mat[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>mat[i][j];
            }
        }
        set<char>st;
        st.insert(p);
        st.insert('.');
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==p){
                    if(i>0) st.ins(mat[i-1][j]);
                    if(i<n-1)st.ins(mat[i+1][j]);
                    if(j>0) st.ins(mat[i][j-1]);
                    if(j<m-1) st.ins(mat[i][j+1]);
                }
            }
        }
        cout << st.size()-2 <<endl;
    }
    return 0;
}

