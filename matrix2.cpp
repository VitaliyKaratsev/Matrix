﻿//Дана матрица размера n * m, необходимо преобразовать её в одномерный массив в порядке следования столбцов матрицы, т.е.записать
//каждый последующий столбец в строку

#include "stdafx.h"
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int *array;
	int n; // строки 
	int m; // столбцы
	cout << "Введите количество строк " << endl;
	cin >> n;
	cout << "Введите количество столбцов  " << endl;
	cin >> m;
	int **matrix = new int*[n];
	for (int i = 0; i < n; i++) // создание матрицы с учетом введеных пользователем данных
		matrix[i] = new int[m];

	array = new int[n * m]; // создаем одномерный массив размера n*m

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			matrix[i][j] = 2 + rand() % 25; ; // заполнение матрицы случайными значениями
			cout << setw(4) << matrix[i][j]; // вывод матрицы на экран
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < m; i++)  // заполняем одномерный массив значениями из матрицы
		for (int j = 0; j < n; j++) {
			array[i*j] = matrix[i][j];
			cout << setw(4) << array[i*j]; // выводим одномерный массив
		}
	cout << endl;



	system("pause");
	return 0;
}
