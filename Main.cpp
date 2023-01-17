#include <iostream>
#include <string>

using namespace std;

int main() {
	system("chcp 1251>nul");
	string String1 = "";
	string String2 = "";

	cout << "Введiть слово #1:";
	while (String1.length() == 0) getline(cin, String1);
	cout << "\nВведiть слово #2:";
	while (String2.length() == 0) getline(cin, String2);

	String1 = String1[String1.size() - 1];
	String2 = String2[String2.size() - 1];

	if (String1 == String2)
		cout << "Слова закінчуються однаковими буквами";
	else
		cout << "Слова не закінчуються однаковими буквами \n";
}

/*
Задайте дві змінні, які містять рядки. Перевірте чи вони закінчуються однаковою
буквою.
*/
