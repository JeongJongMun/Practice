/* Ŭ���� = �ڷ� ���� + �ڷ� ó�� = ���� + �Լ�
Ŭ����(Ÿ��) : Ư���� �뵵�� �����ϱ� ���� ������ �Լ��� ��� �� Ʋ(�ڷ���)
��ü(������Ʈ) : �� Ʋ�� �̿��Ͽ� �� ��ü(����, �޸� ���� ����) */

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
		cout << "TV�� �׽��ϴ�" << endl;
	}

	void Off() {
		powerOn = false;
		cout << "TV�� �����ϴ�" << endl;
	}

	void setChannel(int cnl) {
		if (cnl >= 1 && cnl <= 999) {
			channel = cnl;
			cout << "ä���� " << cnl << "(��)�� �ٲ���ϴ�" << endl;
		}
	}

	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
			cout << "������ " << vol << "(��)�� �ٲ���ϴ�" << endl;

		}
	}
};

int main() {
	TV lg;

	//lg.powerOn = true;
	lg.On();

	//lg.channel = 10;
	lg.setChannel(10);

	lg.setVolume(50); // �̷������� �Լ��� �����ϸ� ������ ���� ���������� ���� �� �� �ֱ�� �ѵ�
	//lg.volume = 400; � �����ڴ� �̷� ������ ������ �����ع����� ������ �ʹ� Ŀ�������� 
	//volume�� ���� �����Ӱ� ������ �� �ִ�
	//�׷��� C++���� �����ϴ°� �������������ڶ�°Ŵ� = setVolume �Լ� �ȿ����� volume�� ���� �����Ӱ� ���� �� �� ������
	//�ۿ����� ���� �� �� ���Բ� �ϴ°� = private / public / protected
}