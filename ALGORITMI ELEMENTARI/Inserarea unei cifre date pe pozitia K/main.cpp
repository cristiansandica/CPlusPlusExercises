#include <iostream>

using namespace std;

int poz, nrc, n, c, cn, nr, i, p=1, epoz;

int main()
{
    cin>>n>>poz>>c;
    cn=n;
    while (cn)
    {
        nrc++;
        cn=cn/10;
    }
    epoz=nrc-poz+2;

    while (n)
    {
        i++;
        if (i!=epoz)
        {
            nr=(n%10)*p+nr;
            p=p*10;
        }
        else if (i==epoz)
        {
            nr=c*p+nr;
            p=p*10;
            nr=(n%10)*p+nr;
            p=p*10;
        }
        n=n/10;
    }

    cout<<nr;
    return 0;
}
