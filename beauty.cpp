#include<iostream>
using namespace std;
int main()
{
    int len,d,count=0;
    cin>>len;
    cin>>d;
    int *p=new int[len];
    int i,j,k;
    for(i=0;i<len;i++)
    {
        cin>>p[i];
    }
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;)
        {
            if(p[i]==p[j])
            {
               for(int k=j;k<len-1;++k)
                    p[k]=p[k+1];

                --len;
            }
            else
            {
                ++j;
            }
        }
    }


         for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            for(k=0;k<len;k++)
            {
                if(i!=j&&j!=k&&i!=k)
                {
                    if((p[j]-p[i]==d)&&(p[k]-p[j]==d))
                    {
                        count++;
                        k=len;
                        j=len;
                    }
                }
            }
        }
    }
cout<<count;
}


