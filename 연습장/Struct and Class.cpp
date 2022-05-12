/* 클래스 = 자료 저장 + 자료 처리 = 변수 + 함수
클래스(타입) : 특정한 용도를 수행하기 위한 변수와 함수를 모아 둔 틀(자료형)
객체(오브젝트) : 그 틀을 이용하여 찍어낸 개체(변수, 메모리 상의 공간) */

#include <iostream>
#include <cstring>

using namespace std;

struct TV {

private:
	bool powerOn;
	int channel;
	int volume;

public:
	void On() {
		powerOn = true;
		cout << "TV를 켰습니다" << endl;
	}

	void Off() {
		powerOn = false;
		cout << "TV를 껐습니다" << endl;
	}

	void setChannel(int cnl) {
		if (cnl >= 1 && cnl <= 999) {
			channel = cnl;
			cout << "채널을 " << cnl << "(으)로 바꿨습니다" << endl;
		}
	}

	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
			cout << "볼륨을 " << vol << "(으)로 바꿨습니다" << endl;

		}
	}
};

int main() {
	TV lg;

	//lg.powerOn = true;
	lg.On();

	//lg.channel = 10;
	lg.setChannel(10);

	lg.setVolume(50); // 이런식으로 함수를 설정하면 볼륨의 값을 안정적으로 설정 할 수 있기는 한데
	//lg.volume = 400; 어떤 개발자는 이런 식으로 볼륨을 설정해버리면 볼륨이 너무 커져버린다 
	//volume의 값에 자유롭게 접근할 수 있다
	//그래서 C++에서 지원하는게 접근제어지시자라는거다 = setVolume 함수 안에서는 volume의 값에 자유롭게 접근 할 수 있지만
	//밖에서는 접근 할 수 없게끔 하는것 = private / public / protected
}