#include<iostream>
#include<string>

using namespace std;

int main()
{
    cout<<"Count Number of Vowels and consonants from the string "<<endl;
    string user;
    cout<<"Enter the string "<<endl;
    cin>>user;
    int vowelcount = 0;
    int consonatcount = 0;

    for(int i = 0 ; i<user.size();i++){
        if(user[i]=='a' || user[i]=='e'|| user[i]=='i'|| user[i]=='o'|| user[i]=='u' ){
            vowelcount++;
        }else{
            consonatcount++;
        }
        
    }

    cout << "No of vowels and consonants are :"<<vowelcount<<" and "<<consonatcount<<endl;

    return 0;
    
}