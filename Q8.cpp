#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<< "Enter the number: ";
    cin>>n;
    int rev=0;
    int rem;
    int temp=n;
    while (n!=0)
    {
       rem=n%10;
       rev= rev*10+rem;
       n=n/10; 
    }
    if (temp==rev){
        cout<< "THE NUMBER IS A PALINDROME";
    }
    else{
        cout<< "THE NUMBER IS NOT A PALINDROME";
    }
}