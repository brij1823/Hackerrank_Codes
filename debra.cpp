#include<iostream>
#include<cstring>
using namespace std;
int main()
{
     char cnum[50];
     int num[50],list[50],query;
     int i,j,k;
     cin>>cnum;
     cin>>query;
     for(i=0;i<query;i++)
     {
         cin>>list[i];
     }

     int len;
     len=strlen(cnum);

     for(i=0;i<len;i++)
     {
         int d;
         d=cnum[i]-96;
         num[i]=d;
     }
    for(i=0;i<query;i++)
    {
       int count=0;

        for(j=1;j<=10000;j++)
        {
             if(list[i]%j==0)
             {
                int a;
                a=list[i];
                a=a/j;
                for(k=0;k<len;k++)
                {
                    if(num[k]==a)
                    {
                          count++;

                    }
                    else if(count==j)
                    {
                        cout<<"Yes"<<endl;
                        goto jump;
                    }

                    else
                    {
                      count=0;
                      continue;

                    }
                }

             }
             else
             {
                                  continue;
             }
        }
        cout<<"no"<<endl;
        jump:
            int g;
    }
}

