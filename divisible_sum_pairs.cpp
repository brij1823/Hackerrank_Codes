#include<iostream>
using namespace std;
int main()
{

   cout<<"          ";
   for(int x=1;x<=10;x++)
   {
        cout<<"#";
   }
   cout<<"Divisible pairs";


      for(int y=1;y<=10;y++)
   {
        cout<<"#";
   }
    int *p,*q;
    int size,factor,i,j,count=0;
    cout<<endl<<endl<<"     Enter size of array \n\n Enter divisible factor ";
    cin>>size>>factor;
    p=new int[size];
    q=p;
    for(i=0;i<size;i++)
    {
        cout<<"     Enter members of array"<<endl;
        cin>>p[i];

    }

    for(i=0;i<size;i++)
       {
           for(j=i+1;j<size;j++)
              {
                  if((p[i]+p[j])%factor==0)
                  {
                      count++;
                  }
              }
       }

cout<<endl<<endl<<endl<<"     Number of pairs divisible with the factor are ";
cout<<count;
}
