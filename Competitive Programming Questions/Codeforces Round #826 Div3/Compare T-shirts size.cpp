//Link To The Problem : https://codeforces.com/contest/1741/problem/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        if((s1==s2) ||
        (s1[s1.length()-1]==s2[s2.length()-1] && s2.length()==s1.length())
        ){
            cout<<"="<<endl;continue;
        }
        if(s1[s1.length()-1]==s2[s2.length()-1]){
            if(s1[s1.length()-1]=='S'){
                if(s1.length()>s2.length())
                cout<<"<"<<endl;
                else 
                cout<<">"<<endl;
            }
            else if(s1[s1.length()-1]=='L'){
                if(s1.length()<s2.length())
                cout<<"<"<<endl;
                else 
                cout<<">"<<endl;
            }
            else {
                cout<<"="<<endl;
            }
        }
        else{
        if((s1[s1.length()-1]=='S')){
            cout<<"<"<<endl;
        }
        else if(s1[s1.length()-1]=='M' ){
            if(s2[s2.length()-1]=='S'){
                cout<<">"<<endl;
            }
            else 
            cout<<"<"<<endl;
        }
        else {
            cout<<">"<<endl;
        }
        }
    }
    return 0;
}
