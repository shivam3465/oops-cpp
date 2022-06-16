#include <iostream>
using namespace std;

int main ()
{
int y=1001, j=365, n;
n = (y-1) *j; /* The results in wrong answer since integer
range is exceeded on multiplication */
n = (y-1) *(long)j; // C syntax (also supported by C++)
n = (y-1) *long(j); // C++ syntax
return 0;
}