#include <iostream>
#include <ctime>

using namespace std;

class Ponteiro{
	public:
		int x;
		int y;
		Ponteiro(int _x = 0, int _y = 0);	
		void operator + (Ponteiro* p);
};

Ponteiro::Ponteiro(int _x, int _y){
	this->x = _x;
	this->y = _y;
}

void Ponteiro::operator +(Ponteiro* p){
	this->x += p->x;
	this->y += p->y;
	
//	return *this;

}

int main() {
	
	Ponteiro pt(1,2);
	Ponteiro pt2(3,4);
	cout << pt.x << "\n";
	cout << &pt << "\n";
	pt + &pt2;
	// pt = pt + &pt2;
	cout << &pt << "\n";	
	cout << pt.x << "\n";
	cout << &pt << "\n";
	cout << "------------\n";
		
	
	Ponteiro* pt3 = new Ponteiro(1, 2);
	Ponteiro* pt4 = new Ponteiro(3, 4);
	cout << &pt3 << "\n";
	cout << pt3->x << "\n";
	*pt3 + pt4;
	// *pt3 = *pt3 + pt4;
	cout << &pt3 << "\n";
	cout << pt3->x << "\n";
	
}
