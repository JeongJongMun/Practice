// static ����(�����ִ�) <-> ����(��ü�� ������ �ȴ�)
// ���� = �ؾ Ʋ�� �ش�ȴ�. Ŭ���� �ϳ��� ���� ����� �ϳ���

#include <iostream>
using namespace std;

//0 ~ 1 float R G B

class Color {
public:
	Color() : r(0), g(0), b(0) { }
	Color(float r, float g, float b) : r(r), g(g), b(b) { }

	float GetR() { return r; }
	float GetG() { return g; }
	float GetB() { return b; }

	static Color MixColors(Color a, Color b) { // �̷��� Color Ŭ���� �ȿ� ���� ������ private �ʵ� �ȿ����� ���� �� �� �ִ�.
		return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
	}
	// static�̶�� �ִ� �������� ���� ���� �Լ��� �ִµ� �� �Լ��� � Ŭ������ ������ ������ �ְ� private�ʵ� �ȿ� �ִ� ����鿡�� �����ϰ� ������ ����.

private:
	float r;
	float g;
	float b;

};
/*
Color MixColors(Color a, Color b) {
	return Color( (a.GetR() + b.GetR()) / 2, (a.GetG() + b.GetG()) / 2, (a.GetB() + b.GetB()) / 2 );
}
*/
int main() {
	Color blue(0, 0, 1);
	Color red(1, 0, 0);

	Color purple = Color::MixColors(blue, red); //static�� �ҷ��÷��� namespaceó�� ::�� ���ش�!

	cout << "r = " << purple.GetR() << " g = " << purple.GetG() << " b = " << purple.GetB() << endl;
}