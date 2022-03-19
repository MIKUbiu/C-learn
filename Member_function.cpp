#include<iostream>
using namespace std;
class Box {
public:
	double length, breadth, height;
	double Volume();

};
double Box::Volume()
{
	return length * breadth * height;
}
int main() {
	Box b1;
	double volume;
	cin >> b1.length >> b1.breadth >> b1.height;
	volume = b1.Volume();
	cout << volume;
	return 0;
}