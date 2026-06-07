#include<iostream>
using namespace std;
int main()
{
   int n;
   int rem;
   int product=1;
   cout<<"Enter a Number: ";
   cin>>n;
   while(n>0)
   {
      rem = n%10;
      product = product*rem;
      n = n/10;
   }
   cout<<"\nProduct is= "<<product;
   
   
}