#include<iostream>
#include<cstring>
using namespace std;

int main()
{

  int  hrs,min,sec;
  char type[20],ch,ch1;

 cin>>hrs>>ch>>min>>ch1>>sec>>type;
  if(strcmp(type,"PM")==0&&hrs!=12)
     {
         hrs=hrs+12;
      }
          else if(strcmp(type,"AM")==0 &&hrs==12)
          {
              hrs=0;
          }


         if(hrs<10)
          cout<<"0"<<hrs;
          else
          {
              cout<<hrs;
          }

          if(min<10)
          cout<<ch<<"0"<<min;
           else
           {
               cout<<ch<<min;
           }

          if(sec<10)
          cout<<ch1<<"0"<<sec;
         else
            cout<<ch1<<sec;
}
