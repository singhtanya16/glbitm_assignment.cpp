#include<iostream>

using namespace std;
int main()
{
   int num, digits=0;
   cout<<"Enter the Number: ";
   cin>>num;
   while(num>0)
   {
      digits++;
      num = num/10;
   }
   cout<<"\nTotal Digits = "<<digits;
   cout<<endl;
   return 0;
}