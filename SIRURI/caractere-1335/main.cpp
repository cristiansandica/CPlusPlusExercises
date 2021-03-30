#include <iostream>
#include <cstring>
using namespace std;

char s[251],v[251];
int i;
int main()
{
    cin.getline(s, 251);
    cin.getline(v, 251);

    for(i=0; i<strlen(s); i++)
    {
        if(strchr(v,s[i]))
            cout<<s[i];
    }

    return 0;
}
