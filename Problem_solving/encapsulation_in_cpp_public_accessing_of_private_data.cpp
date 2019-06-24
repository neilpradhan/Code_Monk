#include<iostream>
using namespace std;

class Base{
private:
	int x;

public:
	void setX(int a){ x = a;}
	int getX(){return x;}
};

int main()
{
	Base b1;
	b1.setX(12);
	cout<<b1.getX()<<endl;
	return 0;

}