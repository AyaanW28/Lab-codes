#include <iostream>
using namespace std;
int main()
{
	cout << "Expression 1: " << 10 + 5 * 2 << endl; 
	cout << "Expression 2: " << (10 + 5) * 2 << endl; 
 	cout << "Expression 3: " << 20 - 5 - 3 << endl; 
	//Above expression was performed left to right

	cout << "Expression 4: " << 100 / 7 << endl; 
	cout << "Expression 5: " << 100 % 7 << endl; 
	cout << "Expression 6: " << 2 * 3 + 8 / 4 - 1 << endl; 
	cout << "Expression 6 (with brackets to produce 8): " << 2 * (3 + 8 / 4 - 1) << endl; 

	return 0;

	//I predict expression 1 will print 20, Output was 20
    //I predict expression 2 will print 30, Output was 30
	//I predict expression 3 will print 12, Output was 12
	//I predict expression 4 will print 14, Output was 14
	//I predict expression 5 will print 2, Output was 2
	//I predict expression 6 will print 7, Output was 2
	//I predict expression 6 (with brackets) will print 8, Output was 8
	//All predictions were right
}