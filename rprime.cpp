#include<iostream>
#include<math.h>
using namespace std;
int prime(int s,int count)
{
    for (int i = 1; i <=s; i++)
    {
        if (s%i==0)
        {
            count++;
        }
        
    }
    if (count==2)
    {
        return true;
    }
    else{
        return false;
    }
    

    
}



int main(){

    int s,e,count=0;
    cout<<"Input number for starting range: ";
    cin>>s;
    cout<<"Input number for ending range: ";
    cin>>e;
    while (s<=e)
    {
        if (prime(s,count))
        {
            cout<<" "<<s;
        }
        s++;
    }
    
}