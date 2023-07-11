#include<iostream>
using namespace std;
int main(){
    int sum=0;
    cout<<"Find the first 10 natural numbers: "<<endl<<"---------------------------------------  "<<endl<<"The natural numbers are: "<<endl;
    for (int  i = 1; i <=10; i++)
    {
        cout<<" "<<i;
        sum=sum+i;
    }
    cout<<"\nThe sum of first 10 natural numbers: "<<sum<<endl;
}