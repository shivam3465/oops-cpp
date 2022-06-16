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

class complex{
    public:
    float real,img;
    complex(){
        // cout<<"default consturctor called "<<endl;
    }
    complex(float a,float b){
        real=a;
        img=b;
    }
    void sum(complex a,complex b){
        real=a.real+b.real;
        img=a.img+b.img;
    }
    void print(){
        cout<<real<<" + "<<img<<"i ";
    }
};
int32_t main(){
  complex a(1,2),b(2,3),c;
  c.sum(a,b);
  c.print();
  cout<<endl;
  return 0;
}