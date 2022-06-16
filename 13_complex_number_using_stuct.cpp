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

struct complex{
    float real,img;
};
complex set_complex(float a,float b){
    complex tem;
    tem.real=a;
    tem.img=b;
    return tem;
}
complex add_Two_complex(complex a,complex b){
    complex tem;
    tem.real=a.real+b.real;
    tem.img=a.img+b.img;
    return tem;
}

void print_complex(complex n){
    cout<<n.real<<" + "<<n.img<<"i ";
}
int32_t main(){
  complex a,b,c;
  a=set_complex(1,2);
  b=set_complex(2,3);
  c=add_Two_complex(a,b);
  cout<<"the sum of ";
  print_complex(a);
  cout<<"and ";
  print_complex(b);
  cout<<"is ";
  print_complex(c);
  cout<<endl;
  print_complex(c);
  return 0;
}