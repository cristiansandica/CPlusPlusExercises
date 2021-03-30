#include <iostream>

using namespace std;

int poz,nrc,n,cn, nr, i,p=1,epoz;
int main()
{
    cin>>n>>poz;
    cn=n;
    while(cn)
    {
        nrc++;
        cn=cn/10;
    }
    npoz=nrc-poz+1;
    while(n)
    {
        i++;
        if(i!=epoz)
        {
            nr=(n%10)*p+nr;
            p=p*10;
        }
        n=n/10;
    }
    cout<<nr;
    return 0;

}
