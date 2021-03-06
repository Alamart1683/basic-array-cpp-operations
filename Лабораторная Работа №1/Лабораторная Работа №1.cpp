#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <malloc.h>
using namespace std;
#define MaxLength 20
int Array[MaxLength];
int Length;

//ПРОТОТИПЫ ФУНКЦИЙ
int Interface_Main();
int Interface_Task1();
int Interface_Task1_InputArray();
int Interface_Task2();
int Interface_Task2_InputArray();
void Task1_InputArrayByHand(int*Array, int Length);
void Task2_InputArrayByHand(int*Array, int Length);
void Task1_InputArrayByRand(int*Array, int Length);
void Task2_InputArrayByRand(int*Array, int Length);
void Task1_ArrayOutput(int*Array, int Length);
void Task2_ArrayOutput(int*Array, int Length);
bool Task1_PrimeNumber(int N);
void Task1_MaxPrimeNumber(int*Array, int Length);
void Task2_RemoveRepeate(int*Array, int Length);
int Task2_RemoveSymbolsInUnicode(int*Array, int Length);
int Task2_MostSignificantBit(int Number);
void Task2_BubbleIndex(int*Array, int Length);
bool Task2_SumOfNumbersBySeven(int Number);
void Task2_SumBySevenArray(int*Array, int Length);
void Task2_NOD(int*Array, int Length);

int main()
{
	system("cls");
	setlocale(LC_CTYPE, "RUS");
	int* DynamicArray = (int*)malloc(Length * sizeof(int));
	int step;
	int back_main = 0;
	int back_sub = 0;
	while (back_main == 0)
	{
		step = Interface_Main();
		switch (step)
		{
		case 1:
			system("cls");
			cout << "Выбрано задание 1" << endl;
			while (back_sub == 0) 
			{
				step = Interface_Task1();
				switch (step) 
				{

/*____________________________________________________________________________________________*/

				case 1:
					system("cls");
					cout << "Введите длину массива:" << endl;
					cout << ">>> ";
					cin >> Length;
					if (Length > 0 && Length <= MaxLength) 
					{
						while (back_sub == 0) 
						{
							step = Interface_Task1_InputArray();
							switch (step)
							{
								case 1:
									system("cls");
									Task1_InputArrayByHand(Array, Length);
									back_sub = 1;
									break;
								case 2:
									system("cls");
									Task1_InputArrayByRand(Array, Length);
									back_sub = 1;
									break;
								default:
									back_sub = 1;
									break;
							}
						}
						back_sub = 0;
					}
					else
					{
						system("cls");
						cout << "Длина должна массива быть больше 0 и меньше 20!" << endl;
						cout << "Попробуйте еще раз." << endl;
						system("pause");
					}
					break;

				case 2:
					system("cls");
					if (Length == NULL)
					{
						cout << "Массив не был введен!\n";
						cout << "Введите массив и попробуйте ещё раз.\n";
						system("pause");
						break;
					}
					else
					{
						Task1_ArrayOutput(Array, Length);
						break;
					}

				case 3:
					system("cls");
					Task1_MaxPrimeNumber(Array, Length);
					break;

				case 4:
					Length = NULL;
					back_sub = 1;
					break;

				default:
					back_sub = 1;
					break;
				}
			}
			back_sub = 0;
			break;

/*____________________________________________________________________________________________*/

		case 2:
			system("cls");
			cout << "Выбрано задание 2" << endl;
			while (back_sub == 0)
			{
				step = Interface_Task2();
				switch (step)
				{
				case 1:
					system("cls");
					cout << "Введите длину массива:" << endl;
					cout << ">>> ";
					cin >> Length;
					if (Length > 0)
					{
						DynamicArray = (int*)realloc(DynamicArray, sizeof(int)*(Length));
						while (back_sub == 0)
						{
							step = Interface_Task2_InputArray();
							switch (step)
							{
							case 1:
								system("cls");
								Task2_InputArrayByHand(DynamicArray, Length);
								back_sub = 1;
								break;
							case 2:
								system("cls");
								Task2_InputArrayByRand(DynamicArray, Length);
								back_sub = 1;
								break;
							default:
								back_sub = 1;
								break;
							}
						}
						back_sub = 0;
					}
					else
					{
						system("cls");
						cout << "Длина должна массива быть больше 0!" << endl;
						cout << "Попробуйте еще раз." << endl;
						system("pause");
					}
					break;

				case 2:
					system("cls");
					if (Length == NULL)
					{
						cout << "Массив не был введен!\n";
						cout << "Введите массив и попробуйте ещё раз.\n";
						system("pause");
						break;
					}
					else
					{
						Task2_ArrayOutput(DynamicArray, Length);
						break;
					}

				case 3:
					system("cls");
					if (Length == NULL)
					{
						cout << "Массив не был введен!\n";
						cout << "Введите массив и попробуйте ещё раз.\n";
						system("pause");
						break;
					}
					else
					{
					    Task2_RemoveRepeate(DynamicArray, Length);
						break;
					}

				case 4:
					system("cls");
					if (Length == NULL)
					{
						cout << "Массив не был введен!\n";
						cout << "Введите массив и попробуйте ещё раз.\n";
						system("pause");
						break;
					}
					else
					{
						Length = Task2_RemoveSymbolsInUnicode(DynamicArray, Length);
						break;
					}
					
				case 5:
					system("cls");
					if (Length == NULL)
					{
						cout << "Массив не был введен!\n";
						cout << "Введите массив и попробуйте ещё раз.\n";
						system("pause");
						break;
					}
					else
					{
						Task2_BubbleIndex(DynamicArray, Length);
						break;
					}

				case 6:
					system("cls");
					if (Length == NULL)
					{
						cout << "Массив не был введен!\n";
						cout << "Введите массив и попробуйте ещё раз.\n";
						system("pause");
						break;
					}
					else
					{
						Task2_SumBySevenArray(DynamicArray, Length);
						break;
					}

				case 7:
					back_sub = 1;
					Length = NULL;
					break;

				default:
					back_sub = 1;
					break;
				}		
			}
			back_sub = 0;
			break;


/*____________________________________________________________________________________________*/

		case 3:
			system("cls");
			system("pause");
			back_main = 1;
			break;

/*____________________________________________________________________________________________*/

		default:
			system("cls");
			cout << "Ошибка ввода!" << endl;
			cout << "Работа программы остановлена." << endl;
			system("pause");
			back_main = 1;
			break;

/*____________________________________________________________________________________________*/

		}
	}
	delete DynamicArray;
}

//ОПИСАНИЕ ФУНКЦИЙ ИНТЕРФЕЙСА

int Interface_Main() 
{
	system("cls");
	int step;
	cout << "Лабораторная работа №1: Вариант 14" << endl;
	cout << "Выберите действие:" << endl;
	cout << "1. Задание 1;\n";
	cout << "2. Задание 2;\n";
	cout << "3. Выход из программы.\n";
	cout << ">>> ";
	cin >> step;
	return step;
}

int Interface_Task1() 
{
	system("cls");
	int step;
	cout << "Выберите действие:" << endl;
	cout << "1. Ввод данных в массив.\n";
	cout << "2. Вывод массива.\n";
	cout << "3. Найти наибольший среди элементов массива, являющихся простыми числами.\n";
	cout << "4. Вернуться к выбору задания.\n";
	cout << ">>> ";
	cin >> step;
	return step;
}

int Interface_Task1_InputArray() 
{
	int step;
	cout << "Выберите действие:" << endl;
	cout << "1. Ввод данных в массив вручную.\n";
	cout << "2. Заполнение массива случайными числами.\n";
	cout << ">>> ";
	cin >> step;
	return step;
}

int Interface_Task2()
{
	system("cls");
	int step;
	cout << "Выберите действие:" << endl;
	cout << "1. Ввод данных в массив.\n";
	cout << "2. Вывод массива.\n";
	cout << "3. Сформировать массив В из неповторяющихся элементов массива А.\n";
	cout << "4. Удалить из массива А элементы, шестнадцатеричный код которых содержит буквы.\n";
	cout << "5. Упорядочить массив по правилу: с младших индексов числа начинающиеся с цифры 1, затем 2, затем 3 и т.д.\n";
	cout << "6. Найти НОД всех элементов массива, сумма цифр которых кратна 7.\n";
	cout << "7. Вернуться к выбору задания.\n";
	cout << ">>> ";
	cin >> step;
	return step;
}

int Interface_Task2_InputArray() 
{
	int step;
	cout << "Выберите действие:" << endl;
	cout << "1. Ввод данных в массив вручную.\n";
	cout << "2. Заполнение массива случайными числами.\n";
	cout << ">>> ";
	cin >> step;
	return step;
}

//ОПИСАНИЕ ФУНКЦИЙ
void Task1_InputArrayByHand(int*Array, int Length)
{
	bool mistake = false;
	cout << "Введите данные в массив:" << endl;
	for (int i = 0; i < Length; i++)
	{
		cin >> Array[i];
		if (Array[i] < -10000 || Array[i] > 10000)
		{
			mistake = true;
			break;
		}
	}
	if (mistake == false)
	{
		cout << "Ввод окончен!" << endl;
		system("pause");
	}
	else
	{
		system("cls");
		cout << "Выход значения элемента массива за допустимый диапазон!" << endl;
		cout << "Заполните массив заново." << endl;
		system("pause");
	}
}

void Task2_InputArrayByHand(int*Array, int Length)
{
	bool mistake = false;
	cout << "Введите данные в массив:" << endl;
	for (int i = 0; i < Length; i++)
	{
		cin >> Array[i];
		if (Array[i] < 0 || Array[i] > 2000)
		{
			mistake = true;
			break;
		}
	}
	if (mistake == false)
	{
		cout << "Ввод окончен!" << endl;
		system("pause");
	}
	else
	{
		system("cls");
		cout << "Выход значения элемента массива за допустимый диапазон(0...2000)!" << endl;
		cout << "Заполните массив заново." << endl;
		system("pause");
	}
}

void Task1_InputArrayByRand(int*Array, int Length)
{
	for (int i = 0; i < Length; i++)
		Array[i] = -10001 + rand() % 20000;
	cout << "Массив заполнен случайными числами в допустимом диапазоне!" << endl;
	system("pause");
}

void Task2_InputArrayByRand(int*Array, int Length) 
{
	for (int i = 0; i < Length; i++)
		Array[i] = rand() % 2000;
	cout << "Массив заполнен случайными числами в допустимом диапазоне(0...2000)!" << endl;
	system("pause");
}

void Task1_ArrayOutput(int*Array, int Length)
{
	cout << "Массив:" << endl;
	for (int i = 0; i < Length; i++)
		cout << "Array[" << i << "]" << "= " << Array[i] << endl;
	cout << endl;
	cout << "Вывод массива успешно осуществлен!" << endl;
	system("pause");
}

void Task2_ArrayOutput(int*Array, int Length)
{
	cout << "Массив:" << endl;
	for (int i = 0; i < Length; i++)
		cout << "DynamicArray[" << i << "]" << "= " << Array[i] << endl;
	cout << endl;
	cout << "Вывод массива успешно осуществлен!" << endl;
	system("pause");
}

bool Task1_PrimeNumber(int N)
{
	for (int i = 2; i <= 10; i++)
	{
		bool check = false;
		if (i == N) continue;
		if (N%i != 0) check = true;
		if (check == false || N == 1 || N == 0)
		{
			return false;
		}
	}
	return true;
}

void Task1_MaxPrimeNumber(int*Array, int Length)
{
	if (Length == NULL)
	{
		cout << "Массив не был введен!\n";
		cout << "Введите массив и попробуйте ещё раз.\n";
		system("pause");
	}
	else
	{
		int Max = 0;
		for (int i = 0; i<Length; i++)
		{
			if (Task1_PrimeNumber(Array[i]) == true && Array[i] > Max)
				Max = Array[i];
		}
		cout << "Наибольший среди элементов массива, являющийся простым числом: " << Max << endl;
		system("pause");
	}
}

void Task2_RemoveRepeate(int*Array, int Length)
{
	system("cls");
	cout << "Массив без повторяющихся значнений: " << endl;
	
	bool flag = false;
	int SubLength = 0;      
	int *DynamicArrayB = new int[Length];

	for (int i = 0; i < Length; ++i) 
	{
		flag = false;
		for (int j = 0; j < Length; ++j) {
			if (i == j)
				continue;
			else
			{
				if (Array[i] == Array[j])
				{
					flag = false;
					break;
				}
				else
					flag = true;
			}
		}

		if (flag == true)
			DynamicArrayB[SubLength++] = Array[i];
	}

	for (int i = 0; i < SubLength; ++i)
		cout << "DynamicArrayB[" << i << "]" << "= " << DynamicArrayB[i] << endl;
	delete DynamicArrayB;

	cout << "Вывод массива успешно осуществлен!" << endl;
	system("pause");
	
}

int Task2_RemoveSymbolsInUnicode(int*Array, int Length) 
{
	cout << "Удаляемый диапазон элементов массива:" << endl;
	cout << "Для букв латиницы: (0,127)" << endl;
	cout << "Для букв кириллицы: (1024,1279)" << endl;
	
	int i,j;
	for (i = 0; i < Length; ++i)
		if ((Array[i] < 0 || Array[i] < 128) || (Array[i] > 1023 && Array[i] < 1280))
		{
			for (j = i; j < Length; ++j)
				Array[j] = Array[j + 1];
			Length--;
			i--;
		}
	
	Task2_ArrayOutput(Array, Length);
	return Length;
}

int Task2_MostSignificantBit(int Number) 
{
	while (Number > 9) 
	{
		Number = Number / 10;
	}
	return Number;
}

void Task2_BubbleIndex(int*Array, int Length) 
{
	cout << "Отсортированный согласно условию массив:" << endl;
	int temp; 
	int Number, IncNumber;
	for (int i = 0; i < Length - 1; i++) {
		for (int j = 0; j < Length - i - 1; j++) {
			if ((Number = Task2_MostSignificantBit(Array[j])) > (IncNumber = Task2_MostSignificantBit(Array[j + 1])))
			{
				temp = Array[j];
				Array[j] = Array[j + 1];
				Array[j + 1] = temp;
			}
		}
	}
	Task2_ArrayOutput(Array, Length);
}

bool Task2_SumOfNumbersBySeven(int Number)
{
	int Sum = 0;
	while (Number != 0) 
	{
		Sum = Sum + (Number % 10);
		Number = Number / 10;
	}
	if (Sum % 7 == 0) 
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Task2_SumBySevenArray(int*Array, int Length) 
{
	int SubLength = 0;
	int *DynamicArrayB = new int[Length];
	int i;
	for (i = 0; i < Length; ++i)
		if (Task2_SumOfNumbersBySeven(Array[i])) 
		{
			DynamicArrayB[SubLength++] = Array[i];
		}
	Task2_NOD(DynamicArrayB, SubLength);
	delete DynamicArrayB;
}

void Task2_NOD(int*Array, int Length) 
{
	system("cls");
	int NOD = 0;
	for (int i = 0; i < Length; i++)
	{
		if (NOD < Array[i])
			NOD = Array[i];
	}

	while (NOD > 1)
	{
		bool flag = true;
		for (int i = 0; i < Length; i++)
			if (Array[i] % NOD != 0)
			{
				flag = false;
				break;
			}
		if (!flag) --NOD;
		else
			break;
	}

	if (NOD == 0) 
	{
		cout << "В массиве не оказалось элементов, сумма которых кратна 7!" << endl;
		system("pause");
	}
	else
	{
		cout << "НОД для элементов массива, сумма цифр которых кратна 7, равен: " << NOD << endl;
		system("pause");
	}
}
