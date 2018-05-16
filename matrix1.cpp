//Дана матрица размера n, необходимо найти положительные элементы главной диагонали этой матрицы


#include "stdafx.h"
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int n; // переменная для значения размерности матрицы
	cout << "Введите размер матрицы " << endl; 
	cin >> n; // заносим значение введенное пользователем
	int **matrix = new int*[n];
	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[n]; // создание матрицы с учетом введеных пользователем данных
	}
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
	for(int i = 0; i < n; i++) 
		if(matrix[i][i] > 0) // пробегаемся по значениям имеющим одинаковый индекс (главной диагонали), положительные значения выводим на экран
		{


			cout << matrix[i][i] <<setw(4);
		}
	cout << endl;

	system("pause");
	return 0;
}

