// 시h 분m 초s

#include <iostream>
using namespace std;

class Time {
public:
	//Time(5); 5초
	//Time(5,0); 5분
	//Time(2,37,54) 2시간 37분 54초
	Time(): h(0), m(0), s(0) {	}

	Time(int s_): Time() {
		s = s_;
	}

	Time(int m_, int s_): Time(s_) {
		m = m_;
		
	}

	Time(int h_, int m_, int s_): Time(m_, s_) { // 생성자 위임 - 오버로딩이 여러개 돼있을때 코드를 고칠때 편하다
		h = h_;
	}
	int h;
	int m;
	int s;
};

int main() {
	Time t1;
	Time t2(5);
	Time t3(3, 16);
	Time t4(2, 42, 15);

	cout << "t1: " << t1.h << ":" << t1.m << ":" << t1.s << endl;
	cout << "t2: " << t2.h << ":" << t2.m << ":" << t2.s << endl;
	cout << "t3: " << t3.h << ":" << t3.m << ":" << t3.s << endl;
	cout << "t4: " << t4.h << ":" << t4.m << ":" << t4.s << endl;

}

