#include <stdio.h>
#include <locale.h> 
#include <math.h>

double f_x(double x);

double f_x(double x) {

	return pow(x, 3) - 4 * pow(x, 2) + 2;
}

int main() {

	setlocale(LC_CTYPE, "RUS");

	double x, y;
	float s;
	int n = 1;
	while(n) {

		printf("������� �������� ����");
		scanf("%f", &s);
		x = 1;
		printf(" _______________________________\n");
		printf("|\tx\t | \t y\t|\n");
		printf("|_______________________________|\n");
		for (double x = 1; x <= 3; x += s)
		{
			double y = f_x(x);
			printf("|\t%g\t | \t%g\t|\n", x, y);
			printf("|_______________________________|\n");
		}

		printf("������ ���������� ������ ������� 1, ����� 0");
		scanf("%d", &n);
	}
	printf("������ ��������\n");
	return 0;
}

