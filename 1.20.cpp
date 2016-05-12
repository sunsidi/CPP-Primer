#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
	cout << "Enter the book's transactioin";
	Sales_item books;
	while (cin >> books) {
		cout << books << endl;		
	}
}