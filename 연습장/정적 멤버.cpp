// static 정적(멈춰있다) <-> 동적(객체에 포함이 된다)
// 정적 = 붕어빵 틀에 해당된다. 클래스 하나당 정적 멤버는 하나만

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

	static Color MixColors(Color a, Color b) { // 이렇게 Color 클래스 안에 집어 넣으면 private 필드 안에까지 접근 할 수 있다.
		return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
	}
	// static이라는 애는 전역에서 쓰고 싶은 함수가 있는데 그 함수가 어떤 클래스와 밀접한 관련이 있고 private필드 안에 있는 멤버들에게 접근하고 싶을때 쓴다.

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

	Color purple = Color::MixColors(blue, red); //static을 불러올려면 namespace처럼 ::을 써준다!

	cout << "r = " << purple.GetR() << " g = " << purple.GetG() << " b = " << purple.GetB() << endl;
}