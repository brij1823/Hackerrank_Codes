#include<iostream>
using namespace std;
int main()
{
    int test,i,tower,height,a[10000];
    cin>>test;
    for(i=0;i<test;i++)
    {
        cin>>tower>>height;


       if(height==1)
       {
           a[i]=2;
           continue;
       }
    if(tower%2==0)
    {
       a[i]=2;
    }

    else
    {
           a[i]=1;
    }

    }
    for(int j=0;j<test;j++)
    {
        cout<<a[j]<<endl;
    }
}
