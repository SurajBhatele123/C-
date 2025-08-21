#include<iostream>
#include<string>
using namespace std;

int main(){
    cout<<"Find the postion of char in the string "<<endl;
    char user;
    int position = 0;
    bool flag = false;
    string name;
    cout<<"Enter the string by user "<<endl;
    cin>>name;
    cout<<"Enter the char find in the string "<<endl;
    cin>>user;

    
    for(int i = 0 ; i<name.length();i++){
        if(name[i]==user) {
          position = i;
          flag = true; // char found 
          break;
        }
    } 

    if(flag)
    cout<<"Position of char "<<user<<" is "<<position<<endl;
    else
    cout<<"char is not found in the string ";

    return 0;
}