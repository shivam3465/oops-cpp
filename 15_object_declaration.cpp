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

class rectangle{
    private:
    int len,br;
    public:
    void getData(){
        cout<<"Length: "<<len<<" breadth: "<<br<<endl;
    }
    void setData(int x,int y){
        len=x;
        br=y;
    }
    void area(){
        cout<<"Area is "<<len*br<<endl;
    }
};

int32_t main(){
  //object is initialized
  rectangle a;
  //member function is called using object of the class.
  a.setData(10,12); //only public member function can be accessed from outside the class
  a.getData();//private variable or function both can be accessed only by member function of class but cannot be accessed from outside the class using object.s
  a.area();
  return 0;
}