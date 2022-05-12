#include <iostream>
using namespace std;

// 생성자 : 객체가 생성 되자 마자 '멤버 변수 초기화'하기 좋음
// 소멸자 : 메모리 해제

// 복소수 (실수-real, 허수-imag)

class Complex {
public:
	/*
	Complex() {
		real = 0;
		imag = 0;
	} 이거나 Complex(double real_ = 0, double imag_ = 0) 이거나 똑같다!!! 매개변수를 0개 받으면 나오는것이니까
	*/
	Complex(double real_ = 0, double imag_ = 0) { // 함수의 오버로딩 , = 0 은 디폴트 매개변수
	//매개변수를 0개, 1개, 2개를 받을 수도 있다.( 2개가 디폴트 값이 존재 하니까) 그래서 Complex c1; 라고만 선언하면
	//위의 함수와 현재 함수 중에 어떤걸 선언해야될지 모호해서 에러 발생

		real = real_;	
		imag = imag_;
	}

	/* 
	Complex() : real(0), imag(0) { }
	Complex(double real_, double imag_) : real(real_), imag(imag_) { } // 이런게 초기화 목록! 생각보다 편하다
	*/

	//Complex(double real, double imag) : real(real), imag(imag) { } // 이러면 _(언더스코어) 없이 쓸 수 있는 장점이 있다.

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