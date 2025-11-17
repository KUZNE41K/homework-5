#include<iostream>
#include<string>
#include<Windows.h>
#include <cctype>

void one();
inline void Getline();
void Err();





int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

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
	bool newWord = true;
	std::string result = suggestion;
	while (true)
	{
		std::cout << "Введите предложение - ";
		Getline(suggestion);
		if (suggestion.length() == 0)
		{
			Err();
		}

		newWord = true;

		for (int i = 0; i < suggestion.length(); i++)
		{
			if (suggestion[i] == ' ')
			{
				newWord = true;
			}
			else if (newWord)
			{
				suggestion[i] = std::toupper(suggestion[i]);
				newWord = false;
			}
			else
			{
				suggestion[i] = std::tolower(suggestion[i]);
			}
		}
		break;
	}


	if (suggestion.back() == '.')
	{
		std::cout << suggestion;
	}
	else
	{
		suggestion += '.';
		std::cout << suggestion;
	}
}

void Err()
{
	std::cout << "Ошибка пустой ввод!\n Попробуйте еще раз!\n";
}

