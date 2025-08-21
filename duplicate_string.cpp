#include<iostream>
#include<string>
using namespace std;

int main(){

    cout<<"Find the duplicate character from the string "<<endl;
    string user;
    cout<<"Enter the any string "<<endl;
    cin>>user;
    string ans;
    for(int i=0;i<user.size();i++){
        for(int j = i+1  ; j<user.length(); j++){
             if(user[j] == user[i])                
               if(ans.find(user[i])==string::npos)   // this is used for if first char find in string then second apper same char
                    ans += user[i];                   // then skip 
        }
        
    }
    
    if(ans.empty())
     cout<<"Duplicate character not found "<<endl;
     else
     cout<<"Duplicate charater in the string :"<<ans<<endl;

    return 0;
}