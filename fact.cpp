#include<iostream>
using namespace std;
int main()
{
    int n,fact=1;
    cout<<"Input a number to find the factorial: ";
    cin>>n;
    cout<<"The factorial of the given number is: ";
    for (int i = 1; i <= n; i++)
    {
        fact=fact*i;
    }
    cout<<" "<<fact;
    return 0;
}