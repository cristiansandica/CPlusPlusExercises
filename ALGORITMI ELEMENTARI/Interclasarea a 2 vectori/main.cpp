#include <iostream>

using namespace std;


int i,j,n,m,a[101],b[101],c[202],k;
int main()
{
    cin>>n;
    cin>>m;

    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(j=1; j<=m; j++)
    {
        cin>>b[j];
    }

    i=1;
    j=1;
    while(i<=n && j<=m)
    {
        if(a[i]<b[j])

            c[++k]=a[i++];
        else
            c[++k]=b[j++];

    }
    while(i<=n)
        c[++k]=a[i++];
    while(j<=m)
        c[++k]=b[j++];

    for(i=1; i<=n+m; i++)
    {
        cout<<c[i]<<" ";
    }

    return 0;
}
