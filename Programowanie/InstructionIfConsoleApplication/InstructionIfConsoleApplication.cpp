// InstructionIfConsoleApplication.cpp 

//03. Decision instructions -> 01. Instruction If
#include <iostream>

/*

Zasady dobrego kodu:
KISS - Keept it simple, stupid - trzymaj prostotę głupcze,
YAGNI - you aren't gonna need it - nie potrzebujesz tego
DRY - don't repeat yourself - nie powtarzaj się
SOLID

if (warunek)
	//instrukcja jesli prawdziwy warunek

warunek => true/false

typ bool

bool zm = true;
zm = 2 > 5;

Operatory porównania:
> - większe
< - mniejsze
>= - większe bądź równe
<= - mniejsze bądź równe
== - równe
!= - różne

Operatory logiczne:
&& - AND
|| - OR
! - NOT

//dodatowy operator którego nie ma w C++
XOR - albo

a    b     a && b      a || b    !a
F	 F        F           F		  T
F    T        F           T	      T
T    F        F           T       F
T    T        T           T       F


*/

//Napisz program, który wyświetli informacje czy liczba jest dodatnia czy ujemna.
void task1()
{
	int number;
	std::cout << "Podaj liczbe\n";
	std::cin >> number;

	if (number > 0)
		std::cout << "Liczba jest dodatnia\n";

	if (number < 0)
		std::cout << "Liczba jest ujemna\n";

	if (number == 0)
		std::cout << "Liczba jest równa zero\n";

	std::cout << "Kolejna instrukcja\n";
}

//Napisz program, który wyświetli informacje 
// czy liczba jest parzysta czy nieparzysta.
void task2()
{
	int number;
	std::cout << "Podaj liczbe\n";
	std::cin >> number;

	int remainderOfDivision;

	remainderOfDivision = number % 2; //0, 1

	//wersja 1
	if (remainderOfDivision == 0)
		std::cout << "Liczba jest parzysta\n";

	if (remainderOfDivision == 1)
		std::cout << "Liczba jest nieparzysta\n";

	//wersja 2
	if (remainderOfDivision == 0)
		std::cout << "Liczba jest parzysta\n";
	else
		std::cout << "Liczba jest nieparzysta\n";
}

//Napisz program, który wyświetli informacje 
// czy liczba jest z zakresu <1 ; 10).
void task3()
{
	int number;
	std::cout << "Podaj liczbe\n";
	std::cin >> number;

	//wersja 1
	if (number >= 1)
	{
		if (number < 10)
			std::cout << "Liczba jest w przedziale\n";
		else
			std::cout << "Liczba z poza zakresu\n";
	}
	else
		std::cout << "Liczba z poza zakresu\n";

	//wersja 2
	if (number >= 1 && number < 10)
		std::cout << "Liczba jest w przedziale\n";
	else
		std::cout << "Liczba z poza zakresu\n";

	//wersja 3
	if (number < 1 || number >= 10)
		std::cout << "Liczba z poza zakresu\n";
	else
		std::cout << "Liczba jest w przedziale\n";

	//wersja 4
	if (!(number >= 1 && number < 10))
		std::cout << "Liczba z poza zakresu\n";
	else
		std::cout << "Liczba jest w przedziale\n";
}

//Napisz program, który wykona dzielenie dwóch liczb
void task4()
{
	int dividend, divisor;
	std::cout << "Podaj liczbe:\n";
	std::cin >> dividend;
	std::cout << "Podaj liczbe:\n";
	std::cin >> divisor;

	//int quoitent = (int)(dividend / divisor);
	int quoitent;

	if (divisor != 0)
	{
		quoitent = dividend / divisor;
		std::cout << "wynik dzielenia " << quoitent << "\n";
	}
	else
	{
		std::cout << "Dzielenie przez zero \n";
	}
}

//Program sprawdzający czy podana data jest poprawna 
void task5()
{
	int day, month, year;
	std::cout << "Podaj dzień\n";
	std::cin >> day;
	std::cout << "Podaj miesiąc\n";
	std::cin >> month;
	std::cout << "Podaj rok\n";
	std::cin >> year;

	if (day >= 1 && day <= 31
		&& month >= 1 && month <= 12
		&& year != 0
		&& (
			// Miesiące mające 31 dni
			(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)

			//Miesiące mające 30 dni
			|| ((month == 4 || month == 6 || month == 9 || month == 11) && day <= 30)
			//luty
			|| (month == 2
				&& (day <= 28
					|| (day == 29
						&& ((year % 4 == 0 && year % 100 != 0)
							|| year % 400 == 0))))
			)
		)
	{
		std::cout << "Data " << day << "." << month << "." << year << " jest poprawna\n";
	}
	else
	{
		std::cout << "Data nie jest poprawna";
	}
}

//Napisz program, który poprosi użytkownika o podanie liczby od 1 do 7 
// i wyświetli odpowiadający mu dzień tygodnia.
void task6()
{
	int dayOfWeek;
	std::cout << "Podaj numer dnia tygodnia\n";
	std::cin >> dayOfWeek;

	if (dayOfWeek == 1)
		std::cout << "Podniedziałek\n";
	else if (dayOfWeek == 2)
		std::cout << "Wtorek\n";
	else if (dayOfWeek == 3)
		std::cout << "Środa\n";
	else if (dayOfWeek == 4)
		std::cout << "Czwartek\n";
	else if (dayOfWeek == 5)
		std::cout << "Piątek\n";
	else if (dayOfWeek == 6)
		std::cout << "Sobota\n";
	else if (dayOfWeek == 7)
		std::cout << "Niedziela\n";
	else
		std::cout << "Dzień niepoprawny\n";

	switch (dayOfWeek)
	{
	case 1:
		std::cout << "Podniedziałek\n";
		break;
	case 2:
		std::cout << "Wtorek\n";
		break;
	case 3:
		std::cout << "Środa\n";
		break;
	case 4:
		std::cout << "Czwartek\n";
		break;
	case 5:
		std::cout << "Piątek\n";
		break;
	case 6:
		std::cout << "Sobota\n";
		break;
	case 7:
		std::cout << "Niedziela\n";
		break;
	default:
		std::cout << "Dzień niepoprawny\n";
	}
}

int main()
{
	setlocale(LC_CTYPE, "polish");

	task6();
}
