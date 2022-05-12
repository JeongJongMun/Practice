#include <iostream>
using namespace std;

class myClass {
public:
	void printThis() {
		cout << "���� �ּҴ� " << this << endl; // "this"�� printThis�� �ҼӵǾ� �ִ� ��ü(a or b)�� �ּ� ���� ������ �ִ�
	}// ��� class�� struct�ȿ� �ִ� ��� ����Լ����� this �����Ͷ�� �������ʴ� �Ű������� ���·� �޴´�.
	// printThis��� �ִ� ���� myClass�� �̷���� � ��ü�� ���Ե��ִ°� �ƴϰ� �ٸ� �������� ������ This��� �����͸� �Ű�������
	// �������ν� printThis��� �ְ� ��� ��ü �Ҽ������� �˾Ƴ� �� �ִ�.
};

int main() {
	myClass a, b; // a, b �� ��ü
	
	cout << "a�� �ּҴ� " << &a << endl;
	cout << "b�� �ּҴ� " << &b << endl;

	a.printThis(); // a�� �ּ� ����Ŵ
	b.printThis(); // b�� �ּ� ����Ŵ
}

/* class myClass {
public:
	void printThis(myClass* ptr) {
		cout << "���� �ּҴ� " << ptr << endl;
	}
};

int main(){
	myClass a, b; // a, b �� ��ü

	cout << "a�� �ּҴ� " << &a << endl;
	cout << "b�� �ּҴ� " << &b << endl;

	a.printThis(&a);
	b.printThis(&b);
}
 */