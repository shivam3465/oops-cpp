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

struct st{
    static int x,y;
    static void print(){
        cout<<x<<" "<<y<<endl;
    }
};


int st::x;
int st::y;

int32_t main(){
  st s,s1;
  s.x=12;
  s.y=20;
  s1.x=12;
  s1.y=34;
  st::print();
  
  return 0;
}