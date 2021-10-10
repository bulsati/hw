#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

int main() {
	int x1,x2,b,c,d;

	cin >> x1,x2;

	b = (-x1) - x2;
	c = x1 * x2;
	d = (b * b) - 4*c;

	cout << (-b) + sqrt(d) ;


	return 0;
}