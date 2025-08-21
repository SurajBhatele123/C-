#include<iostream>
using namespace std;

int main(){

    cout<<"Generate a Transpose of Square Matrix"<<endl;
    
    int n;
    cout<<"Enter the size of Array "<<endl;
    cin>>n;
    int arr[n][n],trns[n][n];

    for(int i =0 ; i<n ; i++){
        for(int j = 0;j<n;j++){
            cout<<"Enter the value of rows and Columb \n"<<i<<j<<endl;
            cin>>arr[i][j];   // i rows and j colums
        }
            
    }
    cout<<" Given Input Matix by User  "<<endl;
    for(int i = 0 ; i<n ;i++){
        for(int j = 0 ;j<n; j++){
            cout << arr[i][j]<<'\t';
        }
        cout<<"\n";
    }
     cout<<"This ia Transpose Matrix "<<endl;
    
    // Print a Transpose Matrix here

    for (int i =0 ;i<n;i++){
        for(int j =0 ; j<n; j++){
           trns[i][j] = arr[j][i];
           cout<< trns[i][j]<<"\t";
        }
        cout<<"\n";
    }

    return 0;
}