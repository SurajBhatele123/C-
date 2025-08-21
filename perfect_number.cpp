#include <iostream>
using namespace std;

int main(){
    cout<<"print a perfect Number "<<endl;
    int n;
    cout<<"Enter the Value of n"<<endl; // upto taken natural Number 
    cin>>n;
    cout<<"Perfect Number are : ";
    for(int i = 1 ; i<=n;i++){
        int sum = 0;
        for(int j = 1 ; j<i;j++){
          if(i%j==0)
           sum += j;
    }
    if(sum == i)
    cout<<i<<" ";

    
    }
    return 0;
}