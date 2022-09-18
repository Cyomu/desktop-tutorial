// Task1-3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <locale> // для функции setlocale
#include <iostream> // ввод/вывод
#include "Function.h" // для наших функций

//////////////////////////////////////////////
// Главная программа
int _tmain(int argc, _TCHAR* argv[])
{
	// Настраиваем программу на используемый язык.
	setlocale(LC_CTYPE, "Russian_Russia.1251");

	// Создание объектов (выделение пямяти).
	double x; // аргумент функции
	double F1; // значение первой функции
	double F2; // значение второй функции

	// Блок ввода данных
	std::cout << "\nАргумент функции> ";
	std::cin >> x;

	// Блок решения задачи 
	F1 = Function1(x); // Вычисление первой функции
	F2 = Function2(x); // Вычисление второй функции

	// Блок вывода данных
	PrintData(F1, F2);

	std::cout << "\n\n\t Программа закончила работу. "
		<< std::endl;
	system("pause");
	return 0;
}
//void PrintData(double F1, double F2);//{std::cout << F1+" "+F2;}


