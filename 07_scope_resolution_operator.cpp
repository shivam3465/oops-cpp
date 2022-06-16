#include <iostream>
#define endl "\n"
using namespace std;
int i = 10;

int main()
{
    int i = 20;
    cout << "this is local i " << i << " :This is global i " << ::i << endl;
    {
        int i = 30;
        cout << "this is local i of this scope " << i << ": where as this is not  just outside i of this scope but this is global i " << ::i << endl;
    }
    cout << "again this is local i " << i << ": this is global i " << ::i << endl;
    return 0;
}