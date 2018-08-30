#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    char name[600][600];
    for(int i=0;i<m;i++)
    {
        cin>>name[i];
    }

    int counter=0,x=0;
    int a[10000];
    for(int i=0;i<m-1;i++)
    {
        for(int j=i+1;j<m;j++)
        {
          counter=0;
         for(int k=0;k<n;k++)
            {
                int fp=name[i][k]-'0';
                int kp=name[j][k]-'0';
                if(kp|fp){

                    counter++;
                }
            }
            a[x]=counter;
            x++;

        }
    }
    int max=a[0];
    for(int i=1;i<x;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    int yu=0;
    for(int i=0;i<x;i++)
    {
        if(a[i]==max)
            yu++;
    }
    cout<<max<<endl<<yu;




}
