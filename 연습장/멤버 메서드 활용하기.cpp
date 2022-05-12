// 멤버 메서드의 선언과, 정의를 분리하기

/*
void a(); // a,b,c 라는 함수가 있다는걸 미리 알려준다
void b();
void c();

void a() {
	b(); // b함수 호출 가능
}
void b() {
	a();
}
void c() {
	b();
}
*/

#include <iostream>
using namespace std;

class Vector2 {
public:
	Vector2(); // 선언과 정의 분리
	Vector2(float x, float y); 

	float GetX() const; //get 함수도 선언과 정의 분리
	float GetY() const;

	static Vector2 Sum(Vector2 a, Vector2 b) { //정적인 메서드라서 어떠한 객체에 소속이 되어있는게 아니라 클래스에 소속되어있다. 그래서 어떤 객체끼리 연산을 할지 알려줘야함.
		return Vector2(a.x + b.x, a.y + b.y);
	}

	Vector2 Add(Vector2 rhs) { //rhs = right hand side - 우변
		return Vector2(x + rhs.x, y + rhs.y); // 동적인 메서드 어떤 특정한 객체에 포함되어있을수 있어서 그 포함된 그 객체랑 rhs랑의 연산을 한다
	}


private:
	float x;
	float y;
};


int main() {
	Vector2 a(2, 3);
	Vector2 b(-1, 4);
	Vector2 c1 = Vector2::Sum(a, b);
	Vector2 c2 = a.Add(b); // a에 b를 더한 값을 반환

	cout << a.GetX() << ", " << a.GetY() << endl;
	cout << b.GetX() << ", " << b.GetY() << endl;
	cout << c1.GetX() << ", " << c1.GetY() << endl;
	cout << c2.GetX() << ", " << c2.GetY() << endl;
}

Vector2::Vector2() : x(0), y(0) { } // 선언과 정의 분리
Vector2::Vector2(float x, float y) : x(x), y(y) { }
float Vector2::GetX() const { return x; } //const 한번 더 써줌
float Vector2::GetY() const { return y; }
