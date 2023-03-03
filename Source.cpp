#include <iostream>
#include "Header.h"
using namespace std;

Frank::Frank() {
	Covington = 0;
}
Frank::Frank(int newCov) {
	Covington = newCov;
}
int Frank::getCov() {
	return Covington;
}
void Frank::setCov(int newCov) {
	Covington = newCov;
}
