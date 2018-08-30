#include<iostream>
using namespace std;
int main()
{
    long int  test,end,i,j,k,count=0;
    int name[3000],z=0;
    cin>>test;
    for(i=0;i<test;i++)
    {

         cin>>end;
         count=0;
        for(j=2;j<=end;j++)
        {

                  int flag=0;
            for(k=2;k<j;k++)
            {
                if(j%k==0)
                {

                    flag=1;
                    goto jump;
                }

            }
            if(flag==0)
            {


                count++;
            }
            jump:
                int u;

        }


        if(count%2==0)
        {
            name[z]=2;
            z++;
        }
        else
        {
            name[z]=1;
            z++;


        }
    }
    for(k=0;k<z;k++)
    {
        if(name[k]==1)
        {
            cout<<"Alice"<<endl;
        }
        else if(name[k]==2)
        {
            cout<<"Bob"<<endl;
        }

    }


}
