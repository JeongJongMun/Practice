// 1. �Ű������� ���ȭ (��� �Լ�)
// 2. �޼����� ���ȭ (��� �޼��忡�� ���� ��)
// �޼����� ���ȭ = �޼��尡 �ٸ� ��� �������� �ǵ� �� ���� ���������°�

#include <iostream>
using namespace std;

class Account {
public:
	Account() : money(0) { }
	Account(int money) : money(money) { }

	void Deoposit(const int d) {
		//d = money; <- �Ұ���
		money += d;
		cout << d << "���� �����ߴ�!!" << endl;
	}
	void Draw(const int d) {
		if (money >= d) {
			money -= d;
			cout << d << "���� �����ߴ�!!" << endl;
		}
	}

	int ViewMoney() const { // ��ȣ ���̿� �ִ´� / �Լ� �տ��� const�� �ִ°� ���� �ǹ̰� ����
		//money++;  <- �Ұ����ϴ�!
		return money;
	}

private:
	int money;
	

};

int main() {
	Account doodle(100);

	doodle.Deoposit(100);
	doodle.Draw(20);

	cout << doodle.ViewMoney() << endl;
}