//The Error Program A 
#include <iostream> 
int main() 
{ //Missing 'using namespace std;' below include, every cout must have std:: Syntax Error
cout << "Orientation Day" << endl //Missing ; Syntax error
cout << "Total students: " 450 << endl; //Missing << before 450 Syntax error
cout << "Seats left: " << 500 - 450 << endl; 
cout << 'Have a nice day << endl; 
//Above line uses wrong quotes, "" should be used and must be used before << Syntax Error


//Part B 
cout << "Average: " << 60 + 70 + 80 / 3 << endl; //60 + 70 + 80 must be in brackets before being divided by 3 otherwise 156 will be printed instead of 70. Semantic Error
return 0;
//Semantic Error are logical errors, the compiler doesn't catch it while Syntax errors are caught by the compiler and doesn't compile code
}

//Fixed Code
#include <iostream>
using namespace std;
int main()
{
	//Part A
	cout << "Part A: (Corrected)" << endl;
	cout << "Orientation Day" << endl;
		cout << "Total students: " << 450 << endl;
		cout << "Seats left: " << 500 - 450 << endl;
	cout << "Have a nice day" << endl;
		return 0;

		//Part B
		cout << "Part B:" << endl;
		cout << "Average: " << 60 + 70 + 80 / 3 << "(Wrong, before the fix)" << endl;
		cout << "Average: " << (60 + 70 + 80) / 3 << "(Correct, after the fix" << endl;
		return 0;

}