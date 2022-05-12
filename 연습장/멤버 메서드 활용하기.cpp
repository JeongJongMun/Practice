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

	static Vector2 Sum(Vector2 a, Vector2 b) { //������ �޼���� ��� ��ü�� �Ҽ��� �Ǿ��ִ°� �ƴ϶� Ŭ������ �ҼӵǾ��ִ�. �׷��� � ��ü���� ������ ���� �˷������.
		return Vector2(a.x + b.x, a.y + b.y);
	}

	Vector2 Add(Vector2 rhs) { //rhs = right hand side - �캯
		return Vector2(x + rhs.x, y + rhs.y); // ������ �޼��� � Ư���� ��ü�� ���ԵǾ������� �־ �� ���Ե� �� ��ü�� rhs���� ������ �Ѵ�
	}


private:
	float x;
	float y;
};


int main() {
	Vector2 a(2, 3);
	Vector2 b(-1, 4);
	Vector2 c1 = Vector2::Sum(a, b);
	Vector2 c2 = a.Add(b); // a�� b�� ���� ���� ��ȯ

	cout << a.GetX() << ", " << a.GetY() << endl;
	cout << b.GetX() << ", " << b.GetY() << endl;
	cout << c1.GetX() << ", " << c1.GetY() << endl;
	cout << c2.GetX() << ", " << c2.GetY() << endl;
}

Vector2::Vector2() : x(0), y(0) { } // ����� ���� �и�
Vector2::Vector2(float x, float y) : x(x), y(y) { }
float Vector2::GetX() const { return x; } //const �ѹ� �� ����
float Vector2::GetY() const { return y; }
