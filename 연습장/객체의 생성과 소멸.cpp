// ������ : ��ü�� ������ �� �ڵ����� ȣ��Ǵ� �Լ�
// �Ҹ��� : ��ü�� �Ҹ�� �� �ڵ����� ȣ��Ǵ� �Լ�

#include <iostream>
using namespace std;

class myClass {
public:
	myClass() { // ������ , default ������/�Ҹ��ڵ� �ִµ� �̰͵��� �ȿ� �ƹ� ���뵵 ����.
		cout << "�����ڰ� ȣ��Ǿ���!" << endl;
	}
	~myClass() { // �Ҹ���
		cout << "�Ҹ��ڰ� ȣ��Ǿ���!" << endl;
	}
};

//myClass globalObj; // main �Լ��� ���۵Ǳ����� ���� , main�Լ��� ������ ������ �Ҹ�

void testLocalObj() {
	cout << "testLocalObj�Լ� ����!" << endl;
	myClass localObj;
	cout << "testLocalObj�Լ� ��!" << endl;
}

int main() {
	cout << "main �Լ� ����!" << endl;
	testLocalObj();
	cout << "main �Լ� ��!" << endl;
}