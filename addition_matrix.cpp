#include<iostream>
using namespace std;

int main(){

    cout<<"Addition of Two square matrix "<<endl;
    int n;
   cout<<"Enter the value of n "<<endl;
    cin>>n;
    int max1[n][n],max2[n][n],ans[n][n];

    cout<<"Enter Matrix 1 data "<<endl;

    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            cin>>max1[i][j];
        }
        cout<<endl;
    }
    // output of matrix 1 

     cout<<"matrix 1 is : "<<endl;


      for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            cout<<max1[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Enter the matrix 2 : data "<<endl;
     for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            cin>>max2[i][j];
        }
        cout<<endl;
    }
    cout<<"Matrix 2  is "<<endl;

    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            cout<<max2[i][j]<<"\t";
        }
        cout<<endl;
    }
     for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            ans[i][j]=max1[i][j]+max2[i][j];
        }
        cout<<endl;
    }
    cout <<"Addition of Matrix 1 and Matrix 2 is "<<endl;
     for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
           cout<< ans[i][j]<<"\t";
        }
        cout<<endl;
    }
}