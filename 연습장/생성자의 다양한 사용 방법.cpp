#include <iostream>
using namespace std;

// ������ : ��ü�� ���� ���� ���� '��� ���� �ʱ�ȭ'�ϱ� ����
// �Ҹ��� : �޸� ����

// ���Ҽ� (�Ǽ�-real, ���-imag)

class Complex {
public:
	/*
	Complex() {
		real = 0;
		imag = 0;
	} �̰ų� Complex(double real_ = 0, double imag_ = 0) �̰ų� �Ȱ���!!! �Ű������� 0�� ������ �����°��̴ϱ�
	*/
	Complex(double real_ = 0, double imag_ = 0) { // �Լ��� �����ε� , = 0 �� ����Ʈ �Ű�����
	//�Ű������� 0��, 1��, 2���� ���� ���� �ִ�.( 2���� ����Ʈ ���� ���� �ϴϱ�) �׷��� Complex c1; ��� �����ϸ�
	//���� �Լ��� ���� �Լ� �߿� ��� �����ؾߵ��� ��ȣ�ؼ� ���� �߻�

		real = real_;	
		imag = imag_;
	}

	/* 
	Complex() : real(0), imag(0) { }
	Complex(double real_, double imag_) : real(real_), imag(imag_) { } // �̷��� �ʱ�ȭ ���! �������� ���ϴ�
	*/

	//Complex(double real, double imag) : real(real), imag(imag) { } // �̷��� _(������ھ�) ���� �� �� �ִ� ������ �ִ�.

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
	Complex c2 = Complex(2, 3);// c2 ~ c6���� ��� ������ ǥ��
	Complex c3(2, 3);
	Complex c4 = { 2,3 };
	Complex c5 = Complex{ 2,3 };
	Complex c6{ 2,3 };

	cout << "c1 =" << c1.getReal() << ", " << c1.getImag() << endl;
	cout << "c2 =" << c2.getReal() << ", " << c2.getImag() << endl;
	cout << "c3 =" << c3.getReal() << ", " << c3.getImag() << endl;

}