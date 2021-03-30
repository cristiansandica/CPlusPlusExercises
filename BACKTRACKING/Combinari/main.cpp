#include <fstream>

using namespace std;

ifstream fin("combinari.in");
ofstream fout("combinari.out");

int v[16],k,n,p;
int solutie(int k);
void afisare(int k);
void BK(int k);

int main()
{
    fin>>n>>p;
    BK(1);

    return 0;
}

void afisare(int k)
{
    int i;
    for(i=1; i<=p; i++)
        fout<<v[i]<<" ";
    fout<<endl;
}

int solutie(int k)
{
    if(k==p)
        return 1;
    return 0;


}

void BK(int k)
{
    int i;
    for(i=v[k-1]+1; i<=n; i++)
    {
        v[k]=i;
        if(solutie(k))
            afisare(k);
        else
            BK(k+1);
    }
}




