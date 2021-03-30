#include <iostream>

using namespace std;


int n, s=0, r, verif;
int main()
{
    cin>>n;
    verif=n;
    while(n>0)
    {
        r=n%10;
        s=(s*10)+r;
        n=n/10;
    }
    if(verif==s)
        cout<<"Numarul este palindrom";
    else
        cout<<"Numarul nu este palindrom";
    return 0;
}
