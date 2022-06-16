#include<iostream>
#include<vector>
#include<string>
#define int long long
#define vi vector<int>
#define vpii vector<pair<int>>
#define mii map<int,int>
#define mci map<char,int>
#define pb push_back
#define f(i,b) for(int i=0;i<b;i++)
using namespace std;

class a{
    public:
    //this is called as constructor declaration , where the class name is used as name of function without a return type.
    a(){
        cout<<"constructor is called "<<endl;
    }
    //so whenever a object will be formed then this consrtuctor will be called.

    //destructor has also same name as constructor but it's name start with tilde(~) symbol.
    ~a(){
        cout<<"destructor is called and object will be destroyed ."<<endl;
    }
};
int32_t main(){
  a x;
  //here x is a object of a class.
  return 0;
}