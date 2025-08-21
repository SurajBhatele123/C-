#include<iostream>
using namespace std;

int main(){

    cout << " Find the number is even , odd "<<endl;
    cout << "Enter the number "<<endl;
    int number;
    cin>>number;
    if(number%2==0)
      cout << "Even Number "<<endl;
    else if (number)
       cout << "Odd Number"<<endl;
        else 
        cout<< "Neither Number"<<endl;
    return 0;

}