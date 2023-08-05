#include<iostream>
#include<string.h>
using namespace std;
//for case insensetive
// char toLower(char num){
//     if(num>='a'&&num<='z'){
//         return num;
//     }
//     else if(num>='A'&&num<='Z'){
//         return (num+32);
//     }
//    return num;
// }
// bool checkPalindrome(char arr[],int n){
//     int s=0,e=n-1;
//     while(s<e){
//         if(toLower(arr[s])!=toLower(arr[e])){  //to make it case insensetive
//             return 0;
//         }
//         else{
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }
// int getLength(char arr[]){
//     int count=0,i=0;
//      while(arr[i]!='\0'){
//         count++;
//         i++;
//     }
//     return count;
// }
// void reverse(char arr[],int l){
//     int s=0,e=l-1;
//     while(s<e){
//         swap(arr[s++],arr[e--]);
//        // s++;
//         //e--;
//     }
// }
int main(){

  string s1="daabcbaabcbc";
  string s2="abc";
  string s3="dd";
  cout<<s1.find(s3);
  // s1.append(s2,1,2);
  // cout<<s1;
  // s1.erase(0,4);
  // cout<<s1<<endl;
  // int index=s1.find(s2);
  // cout<<index<<endl;
  // cout<<s1.find(s2,4);
    // string s;
    // cin>>s;
    // cout<<s;
   
//    string s1="satyam";
//    string s2="";
//    s2=s1;
//    cout<<s2;
    // char name[20]={'a','s'};
    // char ch[10]={'b'};
    // strcat(ch,name);
    // cout<<ch;
    // // cout<<strlen(name);
    // cout<<strcmp(name,ch);
    // cout<<"Enter the name "<<endl;
    // cin.getline(name,20);
    // cout<<name;
    
    // char name[20];
    // cout<<"Enter your name"<<endl;
    // cin>>name;
    // cout<<"Your name is "<<name<<endl;
    // int length=getLength(name);
    // cout<<"the length of string is "<<length<<endl;
    // reverse(name,length);
    // cout<<"the revesed string is "<<name<<endl;
    // cout<<"Palindrome test: "<<checkPalindrome(name,length);

    // char arr[20];
    // string s="satyam";
    // for(auto x:s){
    //     tolower(x);
    // }
    // cout<<s;
  //  cout<<s.at(2)<<endl;
//   s[2]='\0';
//   s[4]='\0';
//     cout<<s<<endl;
//     cin>>arr;
//     arr[2]='\0';
//     cout<<arr;



}