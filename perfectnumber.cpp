#include<iostream>
using namespace std;
int main(){
    int sum=0,n;
    cout<<"Find the perfect numbers between 1 and 500: "<<endl<<"------------------------------------------------"<<endl<<"The perfect numbers between 1 to 500 are:";
    for (int i = 1; i <= 500; i++)
    {
        sum=0;
        for (int j = 1; j < i; j++)
        {
            if (i%j==0)
            {
                sum=sum+j;
            }
            
        }
        if (i==sum)
        {
            cout<<"\n "<<sum;
        }
        
    }
    
}