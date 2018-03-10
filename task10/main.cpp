#include <stdio.h>
#include <iostream>
#include "task1.h"
#include "task2.h"
using namespace std;
int main() {
	int mode = 0;
	cout << "\n1 - first task;\n2 - second task\n";
	cin >> mode;
	if (mode == 1) {
		taskOne();
	}
	else if (mode == 2) {

	}
	else {
		return 0;
	}
	
	system("pause");
	return 1;
}