// ��� �޼����� �����, ���Ǹ� �и��ϱ�

/*
void a(); // a,b,c ��� �Լ��� �ִٴ°� �̸� �˷��ش�
void b();
void c();

void a() {
	b(); // b�Լ� ȣ�� ����
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
	Vector2(); // ����� ���� �и�
	Vector2(float x, float y);

	float GetX() const; //get �Լ��� ����� ���� �и�
	float GetY() const;

	

	Vector2 operator+(const Vector2 rhs) const; // ������ �޼��� � Ư���� ��ü�� ���ԵǾ������� �־ �� ���Ե� �� ��ü�� rhs���� ������ �Ѵ�
	Vector2 operator-(const Vector2 rhs) const;
	Vector2 operator*(const float rhs) const; // ���� ���ϱ� �Ǽ�
	Vector2 operator/(const float rhs) const; // ���� ������ ���ʹ� �ȵ�
	float operator*(const Vector2 rhs) const; // ���� ���ϱ� ���ʹ� �Ǽ�


private:
	float x;
	float y;
};

Vector2 operator*(const float a, const Vector2 b) { //������ �޼���� ��� ��ü�� �Ҽ��� �Ǿ��ִ°� �ƴ϶� Ŭ������ �ҼӵǾ��ִ�. �׷��� � ��ü���� ������ ���� �˷������.
	return Vector2(a * b.GetX(), a * b.GetY());
} //c3

int main() {
	Vector2 a(2, 3);
	Vector2 b(-1, 4);
	Vector2 c1 = a - b;
	//Vector2 c2 = a.operator*(1.6) �Ʒ����� ���� ,(1.6).operator*(a)�� �Ұ���, �⺻������ �����ϴ� �ڷ����� ������ �����ε��� �Ұ����ϴ� ��ü�� �ƴϴϱ�! ��ü������ ���۷����Ͷ�� �޼��� ��밡��
	Vector2 c2 = a * 1.6; // a�� b�� ���� ���� ��ȯ
	Vector2 c3 = 1.6 * a; // operator�� ���� +�� ���°� ����! +�� �޼��尡 �Ǿ�������̴�.
	float c4 = a * b;

	cout << a.GetX() << ", " << a.GetY() << endl;
	cout << b.GetX() << ", " << b.GetY() << endl;
	cout << c1.GetX() << ", " << c1.GetY() << endl;
	cout << c2.GetX() << ", " << c2.GetY() << endl;
	cout << c3.GetX() << ", " << c3.GetY() << endl;
	cout << c4 << endl;
}

Vector2::Vector2() : x(0), y(0) { } // ����� ���� �и�
Vector2::Vector2(float x, float y) : x(x), y(y) { }
float Vector2::GetX() const { return x; } //const �ѹ� �� ����
float Vector2::GetY() const { return y; }

Vector2 Vector2::operator+(const Vector2 rhs) const { // rhs = right hand side - �캯
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