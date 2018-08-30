#include<iostream>
using namespace std;
int main()
{
    long int i,test,j,tower,k,factor[1000],r=0,copyfactor[10000],final[1000],x=0,height[10000];
    cin>>test;
    for(i=0;i<test;i++)
    {
        r=0;
        cin>>tower;

        for(j=0;j<tower;j++)
        {
            cin>>height[j];
        }

        for(k=0;k<tower;k++)
        {
            for(j=height[k]-1;j>=1;j--)
            {
                if(height[k]%j==0)
                {
                    factor[r]=j;
                    r++;
                    height[k]=j;
                }
            }


        }

        if(r%2==0)
        {
            final[x]=2;
            x++;
        }
        else
        {
            final[x]=1;
            x++;
        }


    }
    for(j=0;j<x;j++)
    {
        cout<<final[j]<<endl;
    }
}
