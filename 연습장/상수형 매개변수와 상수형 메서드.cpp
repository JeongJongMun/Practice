// 1. 매개변수의 상수화 (모든 함수)
// 2. 메서드의 상수화 (멤버 메서드에만 쓸수 있)
// 메서드의 상수화 = 메서드가 다른 멤버 변수들을 건들 수 없게 만들어버리는것

#include <iostream>
using namespace std;

class Account {
public:
	Account() : money(0) { }
	Account(int money) : money(money) { }

	void Deoposit(const int d) {
		//d = money; <- 불가능
		money += d;
		cout << d << "원을 예금했다!!" << endl;
	}
	void Draw(const int d) {
		if (money >= d) {
			money -= d;
			cout << d << "원을 인출했다!!" << endl;
		}
	}

	int ViewMoney() const { // 괄호 사이에 넣는다 / 함수 앞에다 const를 넣는건 거의 의미가 없다
		//money++;  <- 불가능하다!
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