#include <iostream>
#include<cstring>

using namespace std;

char s[256], t[256], voc[]="aeiou";
int i,j;
int main()
{


cin.getline(s,256);

for(i=0;i<strlen(s);i++){
        if(strchr(voc,s[i])!=0){
            t[j++]=s[i];
            i+=2;
        }
        else {
            t[j++]=s[i];
        }
    }
t[j]='\0';
cout<<t;

    return 0;
}
