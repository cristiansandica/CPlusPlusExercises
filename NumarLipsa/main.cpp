#include <iostream>

using namespace std;


int n,j,i,v[1001],maxi=-1,rez,gasit;
int main()
{
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>v[i];
    }
    gasit=0;
    for(i=1; i<n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(v[i]>v[j])
            {
                swap(v[i],v[j]);
            }
        }
    }
    for(i=1; i<n && gasit==0; i++)
    {
        if(v[1]!=1)
        {
            rez=1;
            gasit = 1;
        }
       else if(v[i+1]-v[i]>1)
        {
            rez=v[i]+1;
            gasit = 1;
        }
    }
    if(gasit==0){
        rez=v[n]+1;
    }

    cout<<rez;
    return 0;
}
