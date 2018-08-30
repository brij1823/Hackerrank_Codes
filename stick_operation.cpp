#include<iostream>
using namespace std;
int main()
{
    int size,min,check,count=0;
    cin>>size;
    int *a=new int[size];
    int i;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }

   for(int j=0;j<size;j++)
   {


            count=0;
    for(int k=0;k<size;k++)
        {
         if(a[k]!=0)
          min=a[k];
        }
    for(i=0;i<size;i++)
    {
        if(a[i]!=0)
        {
          if(a[i]<min)
            {
            min=a[i];
            }
        }
    }


    for(i=0;i<size;i++)
     {
        if(a[i]!=0)
                {
                    count++;
                }
         if(a[i]!=0)
         {
            a[i]=a[i]-min;

         }

     }
      if(count!=0)
     cout<<count<<endl;
   }

}
