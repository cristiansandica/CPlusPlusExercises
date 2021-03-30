#include <iostream>

using namespace std;

int v[1001],vizitat[1001],i,n,j,last,nr;
int main()
{
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>v[i];
    }
    for(j=1; j<=n; j++)
        if(vizitat[j]==0)
        {
            nr++;
            last=-1;
            for(i=j; i<=n; i++)
                if(v[i]>last && vizitat[i]==0)
                {
                    last=v[i];
                    vizitat[i]=1;
                }
            //for (i=1;i<=n;i++)
              //  cout<<vizitat[i]<<' ';
            //cout<<endl;
        }

    cout<<nr;
    return 0;
}
