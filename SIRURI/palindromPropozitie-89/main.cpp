#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

ifstream fin("palindrom.in");
ofstream fout("palindrom.out");

char s[256], rez[256];
int i,k,j,n,ok=0,x;
int main()
{
    fin>>n;
    fin.get();
    for(k=1; k<=n; k++)
    {
        fin.getline(s,256);
        x=0;
        for(i=0; i<strlen(s); i++)
        {

            if(isalpha(s[i])!=0)
            {
                rez[x++]=s[i];
            }
        }
        rez[x]='\0';
        i=0;
        j=strlen(rez)-1;
        ok=1;
        while(i<j)
        {
            if(rez[i]!=rez[j])
            {
                ok=0;
                break;
            }
            i++;
            j--;
        }
        if(ok==1)
            fout<<1<<endl;
        else
            fout<<0<<endl;

    }

    return 0;
}
