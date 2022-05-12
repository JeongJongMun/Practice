// 생성자 : 객체가 생성될 때 자동으로 호출되는 함수
// 소멸자 : 객체가 소멸될 때 자동으로 호출되는 함수

#include <iostream>
using namespace std;

class myClass {
public:
	myClass() { // 생성자 , default 생성자/소멸자도 있는데 이것들은 안에 아무 내용도 없다.
		cout << "생성자가 호출되었다!" << endl;
	}
	~myClass() { // 소멸자
		cout << "소멸자가 호출되었다!" << endl;
	}
};

//myClass globalObj; // main 함수가 시작되기전에 생성 , main함수가 완전히 끝나고 소멸

void testLocalObj() {
	cout << "testLocalObj함수 시작!" << endl;
	myClass localObj;
	cout << "testLocalObj함수 끝!" << endl;
}

int main() {
	cout << "main 함수 시작!" << endl;
	testLocalObj();
	cout << "main 함수 끝!" << endl;
}