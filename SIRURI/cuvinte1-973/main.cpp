#include <iostream>
#include <cstring>
using namespace std;


char s[256],voc[]="aeiouAEIOU",*p;
int i,ok;
int main()
{
    cin.getline(s,256);
    p=strtok(s," ");
    while(p)
    {
        ok=1;
        for (i=0; i<strlen(p); i++)
            if (strchr(voc, p[i])==0)
            {
                ok=0;
                break;
            }
        if(ok==1)
            cout<<p<<endl;

        p=strtok(NULL," ");
    }

    return 0;
}
