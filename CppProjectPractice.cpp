
#include <iostream>

using namespace std;

// reference call
int Test(int& num) {
	num += 1;
	cout << num << endl;
	return num;
}


int main()
{
	int num0 = 1;

	Test(num0);
	
	return 0;
}
