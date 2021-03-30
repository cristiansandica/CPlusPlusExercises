#include <iostream>

using namespace std;

int i,j,n,a[101];
int main()
{
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(i=1; i<n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            //sortare crescatoare
            if(a[j]<a[i])
            {
                swap(a[i],a[j]);
            }
        }
    }
    for(i=1; i<=n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
