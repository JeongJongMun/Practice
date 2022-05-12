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

	

	Vector2 operator+(const Vector2 rhs) const; // 동적인 메서드 어떤 특정한 객체에 포함되어있을수 있어서 그 포함된 그 객체랑 rhs랑의 연산을 한다
	Vector2 operator-(const Vector2 rhs) const;
	Vector2 operator*(const float rhs) const; // 벡터 곱하기 실수
	Vector2 operator/(const float rhs) const; // 벡터 나누기 벡터는 안됨
	float operator*(const Vector2 rhs) const; // 벡터 곱하기 벡터는 실수


private:
	float x;
	float y;
};

Vector2 operator*(const float a, const Vector2 b) { //정적인 메서드라서 어떠한 객체에 소속이 되어있는게 아니라 클래스에 소속되어있다. 그래서 어떤 객체끼리 연산을 할지 알려줘야함.
	return Vector2(a * b.GetX(), a * b.GetY());
} //c3

int main() {
	Vector2 a(2, 3);
	Vector2 b(-1, 4);
	Vector2 c1 = a - b;
	//Vector2 c2 = a.operator*(1.6) 아래거의 원본 ,(1.6).operator*(a)는 불가능, 기본적으로 제공하는 자료형은 연산자 오버로딩이 불가능하다 객체가 아니니까! 객체에서만 오퍼레이터라는 메서드 사용가능
	Vector2 c2 = a * 1.6; // a에 b를 더한 값을 반환
	Vector2 c3 = 1.6 * a; // operator를 쓰면 +만 쓰는게 가능! +가 메서드가 되어버린것이다.
	float c4 = a * b;

	cout << a.GetX() << ", " << a.GetY() << endl;
	cout << b.GetX() << ", " << b.GetY() << endl;
	cout << c1.GetX() << ", " << c1.GetY() << endl;
	cout << c2.GetX() << ", " << c2.GetY() << endl;
	cout << c3.GetX() << ", " << c3.GetY() << endl;
	cout << c4 << endl;
}

Vector2::Vector2() : x(0), y(0) { } // 선언과 정의 분리
Vector2::Vector2(float x, float y) : x(x), y(y) { }
float Vector2::GetX() const { return x; } //const 한번 더 써줌
float Vector2::GetY() const { return y; }

Vector2 Vector2::operator+(const Vector2 rhs) const { // rhs = right hand side - 우변
		return Vector2(x + rhs.x, y + rhs.y);
}
Vector2 Vector2::operator-(const Vector2 rhs) const { 
	return Vector2(x - rhs.x, y - rhs.y);
}
Vector2 Vector2::operator*(const float rhs) const { 
	return Vector2(x * rhs, y * rhs);
}
Vector2 Vector2::operator/(const float rhs) const { 
	return Vector2(x / rhs, y / rhs);
}
float Vector2::operator*(const Vector2 rhs) const { 
	return x * rhs.x + y * rhs.y;
}