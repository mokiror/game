#include <iostream>
#include <string>
#include <vector>

//агрегация
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
	std::string closes_ = "оранжевая курточка";
	std::string shoes_ = "зимние ботинки";
	std::string magazine_ = "журнал сомнительного содержания";

};


class Character {
public:

	virtual void Info() {
		inf.Info();
	}

	void GetIt(){
		std::cout << "\nОдежда: " << smth.Close();
		std::cout << "\nОбувь: " << smth.Tapki();
		std::cout << "\nЧто-то: " << smth.Smt();
	}

private:
	//композиция
	class MainInfo {
	public:
		std::string name_ = "Kenny";
		std::string gender_ = "male";
		int age_ = 9;

		virtual void Info() {
			std::cout << "\nИмя: " << name_;
			std::cout << "\nПол: " << gender_;
			std::cout << "\nВозраст: " << age_;
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