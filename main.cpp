#include <iostream>
using namespace std;

int main()
{
int n = 1;
int k = 2;
int r = n;
if (k < n) { r = k; }
cout << "Part a:\nn = " << n << endl;
cout << "k = " << k << endl;
cout << "r = " << r << endl;

if (n < k) { r = k; }
else { r = k + n; }
cout << "\nPart b:\nn = " << n << endl;
cout << "k = " << k << endl;
cout << "r = " << r << endl;

r = k;
if (r < k) { n = r; }
else { k = n; }
cout << "\nPart c:\nn = " << n << endl;
cout << "k = " << k << endl;
cout << "r = " << r << endl;

k = 2;
r = 3;
if (r < n + k) { r = 2 * n; }
else { k = 2 * r; }
cout << "\nPart d:\nn = " << n << endl;
cout << "k = " << k << endl;
cout << "r = " << r << endl;

return 0;
}