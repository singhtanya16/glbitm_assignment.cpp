#include<iostream>
using namespace std;
int main()
{
    int num=0;
    int rem=0;
    int sum=0;
    cout<<"Enter the Number: ";
    cin>>num;
    while(num!=0)
    {
        rem = num%10;
        sum = sum+rem;
        num = num/10;
    }
    cout<<"\n Sum of Digits = "<<sum;
    cout<<endl;
    return 0;
}