#include<iostream>
using namespace std;
int main()
{
    int len,z=0,flag=0;
    int fcount[10000];
    char count[10000];
    cin>>len;
    char p[10000];
    cin>>p;
    int i,j;
    for(i=0;i<len;i++)
    {
        flag=0;
        if(i==0)
        {
            count[z]=p[i];
            z++;
        }
        else
        {
            for(j=0;j<z;j++)
            {
                if(p[i]==count[j])
                {
                    flag=1;
                    break;

                }

            }
            if(flag==0)
            {
                count[z]=p[i];
                z++;
            }
        }

    }

    char final[10000];
    int f=0;
    int q=0;
    int r;
    for(i=0;i<z;i++)
    {
      for(r=i+1;r<z;r++)
      {


      f=0;
      flag=0;
      for(j=0;j<len;j++)
      {
          if(count[i]==p[j]||count[r]==p[j])
          {
              final[f]=p[j];

              f++;

          }
      }
   int k,x;
      for(k=0;k<f;k++)
      {

           if(final[k]==final[k+1])
           {

              flag=1;
              break;
          }
      }
      if(flag==0)
      {
          fcount[q]=f;

          q++;
      }



    }
}

int max;
max=fcount[0];
for(i=0;i<q;i++)
    {
       if(fcount[i]>max)
       {
           max=fcount[i];
       }
    }
    cout<<max;
}
