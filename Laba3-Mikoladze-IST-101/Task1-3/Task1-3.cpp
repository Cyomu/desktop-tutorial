// Task1-3.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <locale> // ��� ������� setlocale
#include <iostream> // ����/�����
#include "Function.h" // ��� ����� �������

//////////////////////////////////////////////
// ������� ���������
int _tmain(int argc, _TCHAR* argv[])
{
	// ����������� ��������� �� ������������ ����.
	setlocale(LC_CTYPE, "Russian_Russia.1251");

	// �������� �������� (��������� ������).
	double x; // �������� �������
	double F1; // �������� ������ �������
	double F2; // �������� ������ �������

	// ���� ����� ������
	std::cout << "\n�������� �������> ";
	std::cin >> x;

	// ���� ������� ������ 
	F1 = Function1(x); // ���������� ������ �������
	F2 = Function2(x); // ���������� ������ �������

	// ���� ������ ������
	PrintData(F1, F2);

	std::cout << "\n\n\t ��������� ��������� ������. "
		<< std::endl;
	system("pause");
	return 0;
}
//void PrintData(double F1, double F2);//{std::cout << F1+" "+F2;}


