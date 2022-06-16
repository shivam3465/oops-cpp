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
    private:
    float real,img;
    public:
    complex(float a=0,float b=0){
        real=a;
        img=b;
    }
    complex operator +(complex a){
        complex res;
        res.real=real+a.real;
        res.img=img+a.img;
        return res;
    }
    void print(){
        cout<<real<<" + "<<img<<"i ";
    }
};
int32_t main(){
  complex a(2,3),b(4,5),c;
  c=a+b;
  c.print();
  cout<<endl;
  return 0;
}