#include<iostream>
using namespace std;

void voter_eligible(int a){
    if(a>=18){
       cout<<"Eligible for Vote "<<endl;
    }else
       cout<<"Not Eligible for Vote "<<endl;
}

int main(){

    cout<<"Write a code for eligible for voting"<<endl;
    int age;
    cout<<"Enter the age of voter "<<endl;
    cin >> age;

    voter_eligible(age);

    return 0;


}