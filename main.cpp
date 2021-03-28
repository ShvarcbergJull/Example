#include <iostream>
#include "human.h"

using namespace std;

int main() {

	Human h1 = Human("Иванов", "Иван", "Иванович");

	h1.getEducation();
	h1.grown();
	h1.getEducation();
	h1.grown();

	return 0;
}
