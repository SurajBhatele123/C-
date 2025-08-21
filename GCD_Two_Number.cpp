#include<iostream>
using namespace std;

int main(){

    cout<<"Find the GCD of two number "<<endl;
    int a ,b,gcd = 1;
    cout<<"Enter the two Number for finding the GCD"<<endl;
    cin>>a>>b;

    int min = (a<b)?a:b;   // find smaller number 

    for(int i = 1 ; i<min ; i++){
        if(a%i==0 && b%i==0)   {    
             gcd = i;
      }

    }

    cout<<"gcd of "<<a<<" and "<<b<< " is :"<<gcd<<endl;

    return 0;

}