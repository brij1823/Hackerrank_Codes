#include<iostream>
using namespace std;
int main()
{
    int a[100][100];
    int i,j;
    int sum1=0,sum2=0;
    int size;
    cin>>size;
     for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(i==j)
            {
                sum1=sum1+a[i][j];
            }
        }
    }

    int x=0,y=size-1;
     for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(i==x && j==y)
            {
                sum2=sum2+a[i][j];
            }
        }
        x++;
        y--;
    }
    int diff;
    diff=sum1-sum2;
    if(diff>=0)
    {
        cout<<diff;
    }
    else
    {
        cout<<-diff;
    }

}
