#include <iostream>

using namespace std;

struct data
{
    int a, l, z;
} x, M, m;

int n, i, Mind, mind;

int main()
{
    cin>>n;
    for (i=1; i<=n; i++)
    {
        cin>>x.a>>x.l>>x.z;
        if (i==1)
        {
            M=x;
            m=x;
        }
        else
        {
            if (x.a<M.a)
            {
                M=x;
                Mind=i;
            }
            else if (x.a==M.a && x.l<M.l)
            {
                M=x;
                Mind=i;
            }
            else if (x.a==M.a && x.l==M.l && x.z<M.z)
            {
                M=x;
                Mind=i;
            }

            if (x.a>m.a)
            {
                m=x;
                mind=i;
            }
            else if (x.a==m.a && x.l>m.l)
            {
                m=x;
                mind=i;
            }
            else if (x.a==m.a && x.l==m.l && x.z>m.z)
            {
                m=x;
                mind=i;
            }
        }
    }
    cout<<mind<<' '<<Mind;
    return 0;
}

