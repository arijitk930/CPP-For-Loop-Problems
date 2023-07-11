#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    
    cout<<"Input a number of terms: ";
    cin>>n;
    cout<<"The natural numbers upto "<<n<<"th terms are:"<<endl;

    for (int i = 1; i <= n; i++)
    {
        cout<<" "<<i;
        sum=sum+i;
    }
    cout<<"\nThe sum of the natural numbers is: "<<sum;

    
}