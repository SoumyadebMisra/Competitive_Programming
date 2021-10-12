#include <iostream>
#include <cstring>

using namespace std;
 
int main(){
    string words;
    int flag=0;
    cout<<"ENTER THE STRING :"<<endl;
    cin>>words;
    int l=words.length();
    char temp[l];
    for(int i=0;i<l;i++){
        temp[i]=words[l-i-1];
    }
    for(int i=0;i<l;i++){
        if(temp[i]!=words[i]){
            flag=1;
            break;
        }
    }
    if(flag){
        cout<<"Is not a palindrome!"<<endl;
    }
    else cout<<"Is a palindrome!"<<endl;
    // string temp;
    // int l;
    // cout<<"ENTER THE STRING :"<<endl;
    // cin>>words;
    // l=words.length();
    // temp=words;
    // for(int i=0;i<l;i++){
    //     words[i]=temp[l-i-1];
    // }
    // if(words==temp){
    //     cout<<"Is a palindrome!"<<endl;
    // }
    // else cout<<"Is not a palindrome!"<<endl;
}