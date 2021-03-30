#include <iostream>
#include <cstring>

using namespace std;

char s1[256], s[256][256], voc[]="aeiouAEIOU", *p;
int i,n,j=0,nrvoc[256],k;
int main()
{

    cin.getline(s1,256);
    p=strtok(s1," ");
    while(p)
    {
        strcpy(s[++j],p);
        k=0;
        for(i=0; i<strlen(p); i++)

            if(strchr(voc,p[i])!=0)
                k++;

        nrvoc[j]=k;
        p=strtok(NULL," ");
    }
    n=j;
    for(i=1; i<n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(nrvoc[i]<nrvoc[j])
            {
                swap(nrvoc[i],nrvoc[j]);
                swap(s[i],s[j]);
            }
            else if(nrvoc[i]==nrvoc[j] && strlen(s[i])<strlen(s[j]))
                swap(s[i],s[j]);
            else if(nrvoc[i]==nrvoc[j] && strlen(s[i])==strlen(s[j])&&strcmp(s[i],s[j])>0)
                swap(s[i],s[j]);

        }
    }
    for(i=1;i<=n;i++){
        cout<<s[i]<<endl;
    }

return 0;
}
