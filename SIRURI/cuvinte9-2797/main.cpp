#include <iostream>
#include <cstring>
using namespace std;

char s[101], voc[]="aeiou", cifre[]="0123456789",*p,rez[101];
int i,j,n,ok=0;
int main()
{
    cin.getline(s,101);
    p=strtok(s," ");
    while(p)
    {
        if(strchr(cifre,p[0])!=NULL && p[0]>rez[0])
        {
            strcpy(rez,p);
            ok=1;
        }
        p=strtok(NULL," ");
    }
    if(ok==1)
        cout<<rez;
    else
        cout<<"nu exista";
    return 0;
}
