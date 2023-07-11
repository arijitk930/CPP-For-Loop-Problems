#include<iostream>
using namespace std;
int main(){
    
    cout<<"Input a number to check prime or not: ";
    int n,p=0;
    cin>>n;
    for (int  i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            p++;
        }
    }
    if (p==2)
    {
        cout<<"It's a prime.";
    }
    else
    {
        cout<<"It's a non prime .";
    }
    
    

}