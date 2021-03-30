#include <iostream>
#include <cstring>
using namespace std;

char s[101], voc[]="aeiou", rez[101];
int i;
int main()
{
    cin.getline(s,101);

    for(i=0;i<=strlen(s);i++){
        if(strchr(voc,s[i])!=0){
            strcpy(rez,s+i+1);
            s[i+1]=s[i];
            strcpy(s+i+2,rez);
            i++;
        }
    }
    cout<<s;

    return 0;
}
