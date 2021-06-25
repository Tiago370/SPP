#include <iostream>
#include <string.h>
#include "rect.h"
#define DEBUG 0

using namespace std;
int main(int argc, char **argv) {
	Rect rect = Rect(10, 15);
	cout << rect.getX() << " " << rect.getY() << " " << rect.getW() << " " << rect.getH() << endl;
	rect.setPosition(10,10);
	cout << rect.getX() << " " << rect.getY() << " " << rect.getW() << " " << rect.getH() << endl;
	rect.down();
	cout << rect.getX() << " " << rect.getY() << " " << rect.getW() << " " << rect.getH() << endl;
	rect.toTheLeft();
	cout << rect.getX() << " " << rect.getY() << " " << rect.getW() << " " << rect.getH() << endl;
	rect.toTheRight();
	cout << rect.getX() << " " << rect.getY() << " " << rect.getW() << " " << rect.getH() << endl;

	return 0;
}
