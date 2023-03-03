#include <iostream>
#include "Header.h"
using namespace std;

int main() {
	Frank* fptr;
	fptr = new Frank(21);
	fptr->setCov(23);
	cout << fptr->getCov() << endl;
	delete fptr;
}