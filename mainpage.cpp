#include <iostream>
#include <string>
#include <vector>

//���������
class Bag {
public:
	std::string Close() {
		return closes_;
	}

	std::string Tapki() {
		return shoes_;
	}

	std::string Smt() {
		return magazine_;
	}

private:
	std::string closes_ = "��������� ��������";
	std::string shoes_ = "������ �������";
	std::string magazine_ = "������ ������������� ����������";

};


class Character {
public:

	virtual void Info() {
		inf.Info();
	}

	void GetIt(){
		std::cout << "\n������: " << smth.Close();
		std::cout << "\n�����: " << smth.Tapki();
		std::cout << "\n���-��: " << smth.Smt();
	}

private:
	//����������
	class MainInfo {
	public:
		std::string name_ = "Kenny";
		std::string gender_ = "male";
		int age_ = 9;

		virtual void Info() {
			std::cout << "\n���: " << name_;
			std::cout << "\n���: " << gender_;
			std::cout << "\n�������: " << age_;
		}
	};

	MainInfo inf;
	Bag smth;
};


int main() {

	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	Character info;
	info.Info();
	info.GetIt();
	std::cout << std::endl;


	return 0;
}