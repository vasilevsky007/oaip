﻿// lab4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(0, "Russian");
	int n, m, k;
	int* a;
	do {
		fflush(stdin);
		system("CLS");
		printf("введите n: ");
	} while (scanf_s("%d", &n) != 1);
		a = (int*)calloc(n, sizeof(int));
	for (int i = 0; i < n; i++) {
		printf("введите a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < n; i++) {
		printf("a[%d]=%d  ", i,a[i]);
	}
	printf("\nсортировка 1)по возрастанию 2)по убыванию \n");
	scanf_s("%d", &k);
	sw:
	switch (k) {
			case 1: for (int i = 0; i < n-1; i++)
			for (int j = 0; j < n-1; j++) {
				if (a[j] > a[j + 1]) {
					m = a[j];
					a[j] = a[j + 1];
					a[j + 1] = m;
				}
			} break;
			case 2: for (int i = 0; i < n - 1; i++)
				for (int j = 0; j < n-1; j++) {
					if (a[j] < a[j + 1]) {
						m = a[j];
						a[j] = a[j + 1];
						a[j + 1] = m;
					}
				} break;
			default: printf("введите 1 или 2"); goto sw;
	}
	printf("\n");
	for (int i = 0; i < n; i++) {
		printf("a[%d]=%d  ", i, a[i]);
	}
	free(a);
	return 0;
	system("pause");
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
