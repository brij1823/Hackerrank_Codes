#include<iostream>
using namespace std;
int main()
{
    int number,level,z=0,final[100000],j,k;
    cin>>number;
    int *p=new int[number];
    int i;
    for(i=0;i<number;i++)
    {
        cin>>p[i];
    }
    cin>>level;
    int *q=new int[level];
    for(i=0;i<level;i++)
    {
        cin>>q[i];
    }
     for ( i = 0; i < number; ++i)
    for (int j = 0; j < number - i - 1; ++j)
      if (p[j] < p[j + 1])
     {
        int temp = p[j];
        p[j] = p[j + 1];
        p[j + 1] = temp;
      }
      int count=0;

     int pos=1;
     for(i=0;i<level;i++)
     {
         count=0;
         pos=1;
         for(j=0;j<number;j++)
         {
             if(q[i]<p[j])
             {
                 pos++;
             }
             else
             {
                 break;
             }

         }
         for(k=0;k<j-1;k++)
     {
         if(p[k]==p[k+1])
         {
             count++;
         }
     }
     final[z]=pos-count;
     z++;

     }
     for(i=0;i<z;i++)
     {
         cout<<final[i]<<endl;
     }
}
