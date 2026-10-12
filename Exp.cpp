#include <iostream>
using namespace std;
int main()
{
	cout << "Expression 1: " << 10 + 5 * 2 << endl; //I predict this will print 20
	cout << "Expression 2: " << (10 + 5) * 2 << endl; //I predict this will print 30
 	cout << "Expression 3: " << 20 - 5 - 3 << endl; //I predict this will print 12 
	//Above expression was performed left to right
	cout << "Expression 4: " << 100 / 7 << endl; //I predict this will print 14
	cout << "Expression 5: " << 100 % 7 << endl; //I predict this will print 2
	cout << "Expression 6: " << 2 * 3 + 8 / 4 - 1 << endl; //I predict this will print 7
	cout << "Expression 6 (with brackets to produce 8): " << 2 * (3 + 8 / 4 - 1) << endl; //I predict this will print 8
	//All predictions were right
}