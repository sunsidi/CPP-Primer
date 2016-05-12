#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
    Sales_item total;
    if (cin >> total) {// initialize total by cin the first transction
        Sales_item trans;
        while (cin >> trans) {//read in the rest of the transactions
            if (total.isbn() == trans.isbn())//if they have the same isbn, then add them up
                total += trans;
            else {//if the isbn is not the same, cout the total for the first book, and then start to count for the next book
                cout << total << endl;
                total = trans;
            }
        }
        cout << total << endl;
    }
    else {
        cerr << "No data?!" << endl;//if there is no data, this will show
        return -1;
    }

    return 0;
}