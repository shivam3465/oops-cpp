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

struct student{
    int roll,Class;
    string name;    
};
void setData(student* s,string name,int roll,int Class){
    s->name=name;
    s->roll=roll;
    s->Class=Class;
}

int32_t main(){
  student *s;
  s=new student;
//   student *s=new student; both are valid

  setData(s,"shivam",23,2);
  
  cout<< s->name <<" is a student of class "<< s->Class <<" with a roll no. "<< s->roll <<endl;
  
  return 0;
}