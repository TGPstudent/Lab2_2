// Lab2_2.c: ���������� ������������ ����� � ������������ ������-�������//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<locale.h>
#include <conio.h>

int a, b, c, y;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	const a = 5;
	const b = -2;
	const c = 3;
	
	y = (3*a-4*b+5*c)/(a*b+2*b*c+3*a*c)-(a*b-c)/4;
	
	printf("\n ���������: \n");
	printf("\n    �����i ����i ��������:");
	printf("\n \t a = %d \n \t b = %d \n \t c = %d \n", a, b, c);
	printf("\n    ��������� ���������: %d", y);

	int getch(); getch();
	return 0;
}
