#include<iostream>
using namespace std;
int main()
{
    int i,j,k,x;
    int o=0;
    int l=0;
    cin>>i>>j;
    int *p=new int[i];
    int *q=new int[j];
    int rcount[10000],r=0;
     int fcount[1000];
    for(k=0;k<i;k++)
    {
        cin>>p[k];
    }
    for(k=0;k<j;k++)
    {
        cin>>q[k];
    }
    for(k=0;k<j;k++)
    {
        for(x=1;x<=q[k];x++)
        {
            if(q[k]%x==0)
            {
                rcount[r]=x;
                r++;
            }
        }
    }

l=0;
    for(k=0;k<r;k++)
    {
        o=0;

         for(x=k+1;x<r;x++)
         {
             if(rcount[k]==rcount[x])
             {

                 o++;
                 rcount[x]=0;



             }

         }
         if(o==(j-1))
         {
              //cout<<rcount[k]<<endl;
             fcount[l]=rcount[k];
             l++;


         }

    }



    int finalans[10000],jk=0,zero=0;
    for(k=0;k<l;k++)
    {


           if(fcount[k]!=0)
            {

                   zero=0;

                for(int u=0;u<i;u++)
                {

                        if(fcount[k]%p[u]==0)
                          {

                                 zero++;
                          }

                }
                if(zero==i)
                          {

                              finalans[jk]=fcount[k];
                              jk++;
                          }

            }

    }
     cout<<jk;

}
