#include<vector>
#include<string>

using namespace std;

class Rect{
public:
	void setPosition(unsigned int x, unsigned int y);
	void down();
	void toTheLeft();
	void toTheRight();
	unsigned int getX();
	unsigned int getY();
	unsigned int getW();
	unsigned int getH();

	Rect(unsigned int w, unsigned int h);
	~Rect();

private:
	unsigned int x;
	unsigned int y;
	unsigned int w;
	unsigned int h;
};
