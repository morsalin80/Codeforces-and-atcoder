#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> rat,cap,wc,man;
    for(int i=0;i<n;i++){
        string a,b;
        cin>>a>>b;
        if(b=="rat"){
            rat.push_back(a);
        }
        else if(b=="man"){
            man.push_back(a);
        }
        else if(b=="captain"){
            cap.push_back(a);
        }
        else{
            wc.push_back(a);
        }
    }
    for(int i=0;i<(int)rat.size();i++)cout<< rat[i] << endl;
    for(int i=0;i<(int)wc.size();i++)cout<< wc[i] << endl;
    for(int i=0;i<(int)man.size();i++)cout<< man[i] << endl;
    for(int i=0;i<(int)cap.size();i++)cout << cap[i] << endl;
}
