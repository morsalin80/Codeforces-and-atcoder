#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    vector<int>place(n/2);
    for(int i=0;i<n/2;i++)
    {
        cin>>place[i];
    }
    sort(place.begin(),place.end());
    int black=0,white=0;
    for(int i=0;i<n/2;i++)
    {
        black += abs(place[i]- (i*2+1));
        white += abs(place[i]- (i*2+2));
    }
    cout << min(black,white)<<endl;
    return 0;
}
