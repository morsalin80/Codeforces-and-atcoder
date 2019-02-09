#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    int n;
    while(cin>>n)
    {
        //cin.ignore();
        char s[6][n+1];
        int j=0;
        for(int i=0;i<n;i++){if(i%3==0)s[j][i]='R';else if(i%3==1)s[j][i]='G';else if(i%3==2)s[j][i]='B';}j++;
        for(int i=0;i<n;i++){if(i%3==0)s[j][i]='R';else if(i%3==1)s[j][i]='B';else if(i%3==2)s[j][i]='G';}j++;
        for(int i=0;i<n;i++){if(i%3==0)s[j][i]='G';else if(i%3==1)s[j][i]='R';else if(i%3==2)s[j][i]='B';}j++;
        for(int i=0;i<n;i++){if(i%3==0)s[j][i]='G';else if(i%3==1)s[j][i]='B';else if(i%3==2)s[j][i]='R';}j++;
        for(int i=0;i<n;i++){if(i%3==0)s[j][i]='B';else if(i%3==1)s[j][i]='R';else if(i%3==2)s[j][i]='G';}j++;
        for(int i=0;i<n;i++){if(i%3==0)s[j][i]='B';else if(i%3==1)s[j][i]='G';else if(i%3==2)s[j][i]='R';}
      //  s1[n]='\0';s2[n]='\0';s3[n]='\0';s4[n]='\0';s5[n]='\0';s6[n]='\0';
        for(int i=0;i<6;i++){
            s[i][n]= '\0';
        //    cout << s[i]<<endl;
        }
        char l[n+1];
        cin>>l;
        int choto = 100000000;
        int monei;
        int c=0;
        for(int i=0;i<6;i++)
        {
            c=0;
            for(int k=0;k<n;k++)
            {
                if(s[i][k]!=l[k])c++;
            }
            if(c<choto){ choto = c; monei = i;}
        }
      //  cout << monei << "<<i\n";
        cout << choto <<endl<<s[monei] <<endl;
    }
    return 0;
}