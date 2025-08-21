#include<iostream>
#include <cmath>
using namespace std;

int main(){
    cout << "Create a calculator"<<endl;
    cout <<" 1 = Additon \n 2 = Subtraction \n 3 = Multiplication \n  4 = Division"<<endl;
    int a,b;
    int op;
    cout<<" Enter the  value of  a and b "<<endl;
    cin>>a>>b;
    cout<<"Enter the operator "<<endl;
    cin>>op;
    // Suraj Bhatele Assignment 1 Task 1 
    
    switch(op){
        case 1:
          cout << "Additon of a and b is "<< a+b;
          break;
        case 2 :
         cout << " Subtration of a and b is "<<a-b;
          break;
        case 3 :
         cout << " Multiply of  a and b is "<< a*b;
          break;
        case 4 :
             if(b)
               cout << " Divison of a and b is "<< a/b ;
             else
               cout << " Divison of a and  b is Infinity ";
           break;
         default :
         cout << "Enter a Invalid operator "<<endl;
         break;
        
    }

    return 0;
}
