#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
	cout << "Enter the book's transactioin: ";
	Sales_item book1, book2;
	cin >> book1 >> book2;
	cout << book1 + book2 << endl;
	
}