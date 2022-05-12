#include <iostream>
using namespace std;

class myClass {
public:
	void printThis() {
		cout << "나의 주소는 " << this << endl; // "this"는 printThis가 소속되어 있는 객체(a or b)의 주소 값을 가지고 있다
	}// 모든 class나 struct안에 있는 모든 멤버함수들은 this 포인터라는 보이지않는 매개변수의 형태로 받는다.
	// printThis라는 애는 실제 myClass로 이루어진 어떤 객체에 포함돼있는게 아니고 다른 공간내에 있지만 This라는 포인터를 매개변수로
	// 받음으로써 printThis라는 애가 어디 객체 소속인지를 알아낼 수 있다.
};

int main() {
	myClass a, b; // a, b 는 객체
	
	cout << "a의 주소는 " << &a << endl;
	cout << "b의 주소는 " << &b << endl;

	a.printThis(); // a의 주소 가리킴
	b.printThis(); // b의 주소 가리킴
}

/* class myClass {
public:
	void printThis(myClass* ptr) {
		cout << "나의 주소는 " << ptr << endl;
	}
};

int main(){
	myClass a, b; // a, b 는 객체

	cout << "a의 주소는 " << &a << endl;
	cout << "b의 주소는 " << &b << endl;

	a.printThis(&a);
	b.printThis(&b);
}
 */