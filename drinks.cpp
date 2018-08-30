#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int price,k,u,x=0,flag=0,j;
    cin>>price>>k>>u;
    long int key[10000],usb[10000];
    long int sum[1000];
    int i;
    for(i=0;i<k;i++)
    {
        cin>>key[i];
    }
    for(i=0;i<u;i++)
    {
        cin>>usb[i];
    }
    for(i=0;i<k;i++)
    {
        for(j=0;j<u;j++)
        {
            sum[x]=key[i]+usb[j];
            x++;
        }
    }
    for(i=0;i<=price;i++)
    {
        for(j=0;j<x;j++)
        {
            if(price-sum[j]==i)
            {
                flag=1;
                cout<<sum[j];
                goto jump;
            }
        }
    }
    if(flag==0)
    {
        cout<<"-1";
    }
jump:
    int y;
}
