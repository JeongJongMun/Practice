// static ����(�����ִ�) <-> ����(��ü�� ������ �ȴ�)
// ���� = �ؾ Ʋ�� �ش�ȴ�. Ŭ���� �ϳ��� ���� ����� �ϳ���

#include <iostream>
using namespace std;

//0 ~ 1 float R G B

class Color {
public:
	Color() : r(0), g(0), b(0), id(idCounter++) { } // id�� idCounter�� �ְ� idCounter�� 1�� ���Ѵ�. + ������ ���� Ȱ��
	Color(float r, float g, float b) : r(r), g(g), b(b), id(idCounter++) { }

	float GetR() { return r; }
	float GetG() { return g; }
	float GetB() { return b; }

	int GetId() { return id; }

	static Color MixColors(Color a, Color b) { // = ���� ��� �޼���, �̷��� Color Ŭ���� �ȿ� ���� ������ private �ʵ� �ȿ����� ���� �� �� �ִ�.
		return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
	}	
	// static�̶�� �ִ� �������� ���� ���� �Լ��� �ִµ� �� �Լ��� � Ŭ������ ������ ������ �ְ� private�ʵ� �ȿ� �ִ� ����鿡�� �����ϰ� ������ ����.

	static int idCounter; // �ʱⰪ�� Ŭ���� �ȿ��� ���� �Ұ���

private:
	float r;
	float g;
	float b;
	int id;

};

int Color::idCounter = 1;

/*
Color MixColors(Color a, Color b) {
	return Color( (a.GetR() + b.GetR()) / 2, (a.GetG() + b.GetG()) / 2, (a.GetB() + b.GetB()) / 2 );
}
*/
int main() {
	Color blue(0, 0, 1);
	Color red(1, 0, 0);

	Color purple = Color::MixColors(blue, red); //���� ������� Ŭ���� �̸� ��ü�� namespace���� ������ �ؼ�  ::�� ���ش�!

	cout << "r = " << purple.GetR() << " g = " << purple.GetG() << " b = " << purple.GetB() << endl;
	cout << "blue.GetId = " << blue.GetId() << endl;
	cout << "red.GetId = " << red.GetId() << endl;
	cout << "purple.GetId = " << purple.GetId() << endl;

}