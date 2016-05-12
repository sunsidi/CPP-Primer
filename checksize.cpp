#include <iostream>
#include <stdlib.h>
using namespace std;
//1 byte = 8 bits
//char is the same size as a single machine byte
int main() {
	cout <<"char: " << sizeof(char) << endl;
	cout <<"bool: " << sizeof(bool) << endl;
	cout <<"wchar_t: " << sizeof(wchar_t) << endl;
	// cout <<"char16_t: " << sizeof(char16_t) << endl;
	// cout <<"char32_t: " << sizeof(char32_t) << endl;
	cout <<"int: " << sizeof(int) << endl;
	cout <<"short: " << sizeof(short) << endl;
	cout <<"long: " << sizeof(long) << endl;
	cout <<"long double: " << sizeof(long double) << endl;
	cout <<"double: " << sizeof(double) << endl;
	cout <<"float: " << sizeof(float) << endl;
	int remain = 1%3;
	cout << remain << endl;
}