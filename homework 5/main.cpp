#include<iostream>
#include<string>
#include<Windows.h>

void one();
inline void Getline();
void Err();




int main()
{
	SetConsoleCP(1251);
	GetConsoleOutputCP(1251);

	one();


	return 0;
}

inline void Getline(std::string& str)
{
	std::getline(std::cin, str, '\n');

}

void one()
{
	std::string suggestion;
	while (true)
	{
		std::cout << "Введите предложение - ";
		Getline(suggestion);
		if (suggestion.length() == 0)
		{
			Err();
		}
		else
		{
			break;
		}
	}
	

}

void Err()
{
	std::cout << "Ошибка пустой ввод!\n Попробуйте еще раз!\n";
}
