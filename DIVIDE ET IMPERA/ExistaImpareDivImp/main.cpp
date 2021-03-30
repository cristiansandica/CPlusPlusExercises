#include <iostream>

using namespace std;

int n,i,a[1001],nr,maxi=-1000;

int divide(int st,int dr)
{
    int r1,r2,mij;
    if(st==dr)
    {
       if (a[st]%2==1)
        nr++;
    }
    else
    {
        mij=(st+dr)/2;
        r1=divide(st,mij);
        r2=divide(mij+1,dr);
        return r1+r2;
    }
}

int main()
{
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>a[i];
    divide(1,n);
    if (nr==0)
        cout<<"NU";
    else
        cout<<"DA";
    return 0;
}
