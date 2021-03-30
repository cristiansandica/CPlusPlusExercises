#include <iostream>
#include <cstring>
using namespace std;

char s[101],voc[]="aeiouAEIOU", *p;
int n,ok=0;
int main()
{
    cin.getline(s,101);
    p=strtok(s," ");
    cin>>n;

    while(p)
    {
        if(strlen(p)==n)
        {
            cout<<p<<endl;
            ok=1;
        }
        p=strtok(NULL," ");
    }
    if(ok==0)
        cout<<"nu exista"<<endl;
    return 0;
}
