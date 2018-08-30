#include<iostream>
using namespace std;
int main()
{
    long int  test,strt,end,i,j,count[200000],k;
    cin>>test;


    for( k=0;k<test;k++)
    {

    cin>>strt>>end;
    for(i=strt;i<=end;i++)
    {
           for(j=1;j<=i;j++)
           {
               if((j*j)==i)
               {
                   count[k]++;
                  goto jump;
               }
                else
                {
                    continue;
                }
           }
           jump:
               int u=0;
    }

    }
    for(int x=0;x<test;x++)
    {
        cout<<count[x]<<endl;
    }
}
