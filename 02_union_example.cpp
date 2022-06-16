#include<iostream>
using namespace std;
union book{
 int sr;
 char name[20];
 float price;
};
int main()
{
 book b;
 cout<<"Enter Serial No.: ";
 cin>>b.sr;
 cout<<"Enter Book Name : ";
 gets(b.name);
 cout<<"Enter Book Price: ";
 cin>>b.price;
 cout<<"\nSerial No.: "<<b.sr; // garbage value will be print
 cout<<"\nBook Name : "<<b.name; // garbage value will be print
 cout<<"\nBook Price: "<<b.price; // accurate value be print
return 0;
}
