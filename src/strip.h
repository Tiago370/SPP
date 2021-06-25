#include<vector>
#include<string>
#include "rect.h"
using namespace std;

class Strip{
public:
	void readInstance(char* arquiv);
	Strip(unsigned int W, unsigned int n);
	~Strip();

private:
	vector<Rect> itens;
	vector<vector<bool>> collisionMatrix;
	unsigned int W;
	unsigned int H;
	unsigned int n;
};
