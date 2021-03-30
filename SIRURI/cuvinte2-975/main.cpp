#include <iostream>
#include <cstring>
using namespace std;

char s[256],*p, rez[256]="zz";
int i,j,ok;
int main()
{
    cin.getline(s,256);
    p=strtok(s,",. ");
    while(p)
    {
        i=0;
        j=strlen(p)-1;
        ok=1;
        while(i<j)
        {
            if(p[i]!=p[j])
            {
                ok=0;
                break;
            }
            i++;
            j--;
        }
        if(ok==1 && strcmp(p,rez)<0)
            strcpy(rez,p);
            p=strtok(NULL," ");
    }
    if(strcmp(rez,"zz")==0)
        cout<<"IMPOSIBIL";
    else
    cout<<rez;
    return 0;
}
