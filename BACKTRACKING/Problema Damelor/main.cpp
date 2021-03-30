#include <iostream>

using namespace std;

int n,k,sol,v[11],gasit;

int valid(int k);
int solutie(int k);
void afisare();
void BK(int k);

int main()
{
    cin>>n;
    BK(1);

    return 0;
}

void BK(int k)
{
    int i;
    for(i=1; i<=n; i++)
    {
        v[k]=i;
        if(valid(k)==1)
        {
            if(solutie(k)==1 && gasit==0)
            {
                afisare();
                gasit = 1;
            }
            else
                BK(k+1);
        }
    }
}

int valid(int k)
{
    int w;
    for(w=1; w<=k-1; w++)
    {
        if((v[w]==v[k]) || (abs(v[k]-v[w])==(k-w)))
            return 0;
    }
    return 1;
}

int solutie(int k)
{
    if(k==n)
        return 1;
    return 0;
}
void afisare()
{
    int i,j;
    gasit = 1;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(v[i]==j)
                cout<<"*"<<" ";
            else
                cout<<"_"<<" ";

        }
        cout<<'\n';
    }

}


