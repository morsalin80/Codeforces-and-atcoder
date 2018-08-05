#include<stdio.h>
int main()
{
    char str[101];
    int ln,i;
    while(scanf("%s",str)!=EOF){
        ln=strlen(str);
        for(i=0;i<ln;i++){
                 if(str[i]=='A'|| str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'||str[i]=='Y'||str[i]=='a'|| str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'||str[i]=='y'){
                    printf("");
                 }
                else if(str[i]!='A'|| str[i]!='E' || str[i]!='I' || str[i]!='O' || str[i]!='U'||str[i]!='Y'||str[i]!='a'|| str[i]!='e' || str[i]!='i' || str[i]!='o' || str[i]!='u'||str[i]!='y'){
                if(str[i]>=65 && str[i]<91){
                    str[i]=str[i]+32;
                    printf(".%c",str[i]);
                }
                else
                    printf(".%c",str[i]);

            }
        }
        printf("\n");
    }

    return 0;
}
