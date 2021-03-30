#include <iostream>
#include <cstring>
using namespace std;

char s[256],t[500], voc[]="aeiou";
int i,j=0;
int main()
{
    cin.getline(s,256);
    for(i=0; i<strlen(s); i++)
    {
        if(strchr(voc,s[i])!=NULL)
           {
               t[j++]=s[i];
               t[j++]='p';
               t[j++]=s[i];
           }
           else
            t[j++]=s[i];
    }
    t[j]='\0';
    cout<<t;



    return 0;
}
