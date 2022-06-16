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
   
int32_t main(){
  int *p=new int(2000); // this initializes the value of new integer variable as 2000;
  cout<<*p<<endl;

//   another way of intitailizing an array is this i.e. dyanamic initialization of array.
  int *arr=new int[6];
  for(int i=0;i<6;i++){
    arr[i]=(i*10+12)%3;
    cout<<arr[i]<<" ";
  }
  delete arr;
  delete p;  
  return 0;
}