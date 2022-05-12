#include <iostream>
using namespace std;

// 생성자 : 객체가 생성 되자 마자 '멤버 변수 초기화'하기 좋음
// 소멸자 : 메모리 해제

// 복소수 (실수-real, 허수-imag)

class Complex {
public:
	Complex() {
		real = 0;
		imag = 0;
	}
	Complex(double real_, double imag_) {
		real = real_;
		imag = imag_;
	}

	double getReal() {
		return real;
	}
	void setReal(double real_) {
		real = real_;
	}
	double getImag() {
		return imag;
	}
	void setImag(double imag_) {
		imag = imag_;
	}

private:
	double real;
	double imag;

};

int main() {
	Complex c1;
	Complex c2 = Complex(2, 3);// c2 ~ c6까지 모두 동일한 표현
	Complex c3(2, 3);
	Complex c4 = { 2,3 };
	Complex c5 = Complex{ 2,3 };
	Complex c6{ 2,3 };

	cout << "c1 =" << c1.getReal() << ", " << c1.getImag() << endl;
	cout << "c2 =" << c2.getReal() << ", " << c2.getImag() << endl;
	cout << "c3 =" << c3.getReal() << ", " << c3.getImag() << endl;

}