
#include <iostream>

using namespace std;

struct StructType {
	
};

// reference call
int Test(int& num) {
	num += 1;
	cout << num << endl;
	return num;
}

class AClass {
public:
	int num = 0;
	string name = "AClass name";
	struct customStruct {
		int num = 1;
		string name = "custom struct name";
	};
	union customUnion {
		int num = 2;
		string name = "custom union name";
	};
	AClass() {


	}

	auto returnA() {
		struct AStruct {
			int num;
			string name;
		};
		AStruct->num = num;
		AStruct->name = name;
		return AStruct;
	}
};


int main()
{
	int num0 = 1;
	int num1 = 2;

	Test(num0);
	Test(num1);
	
	
	return 0;
}
