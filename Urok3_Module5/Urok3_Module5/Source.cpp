#include<stdio.h>
#include<iostream>
#include<time.h>
#include<math.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int i, j, n;

	do
	{
		cout << "\nВведите номер задания: ";
		cin >> n;

		switch (n)
		{
	
			case 1:
			{
				/*1. Ввести два массива действительных чисел, состоящих из 9 и 7 элементов.
				Сформировать третий массив из упорядоченных по возрастанию значений обоих массивов*/

				double A[9], B[7], C[16];

					cout << "Первый массив: " << endl;

						for (i = 0; i < 9; i++)
						{
							A[i] = 10 + rand() % 50;
							cout << "A[" << i << "]=" << A[i] << "  ";
							C[i] = A[i];
						}

						cout << endl;
						cout << endl;

					cout << "Второй массив: " << endl;

						for (i = 0; i < 7; i++)
						{
							B[i] = 10 + rand() % 50;
							cout << "B[" << i << "]=" << B[i] << "  ";
							C[i + 9] = B[i];
						}

						cout << endl;
						cout << endl;

					cout << "Новый массив до сортировки: " << endl;

						for (i = 0; i < 16; i++)
						{
							cout << "C[" << i << "]=" << C[i] << "  ";
						}

						cout << endl;
						cout << endl;

					cout << "Новый массив после сортировки: " << endl;

						for (int i = 1; i < 16; i++)  // Для всех элементов кроме начального
						{
							int value = C[i];         // запоминаем значение элемента
							int index = i;            // и его индекс

								while ((index > 0) && (C[index - 1] > value))
								{
									// смещаем другие элементы к концу массива пока они меньше index
									C[index] = C[index - 1];
									index--;    // смещаем просмотр к началу массива
								}

							C[index] = value; // рассматриваемый элемент помещаем на освободившееся место

						}

						for (i = 0; i < 16; i++)
						{
							cout << "C[" << i << "]=" << C[i] << "  ";
						}

					cout << endl;

				system("pause");
				system("cls");

			}
			break;

			case 2:
			{
				/*2. В заданном целочисленном массиве R(9) определить индекс наибольшего
				из нечетных по значению положительных элементов*/

				int A[9], max = -10000, maxi;

					for (i = 0; i < 9; i++)
					{
						A[i] = 10 - rand() % 15;
						cout << "A[" << i << "]=" << A[i] << "  ";

							if (A[i] % 2 != 0 && (A[i] > max) && A[i]>0)
							{
								max = A[i];
								maxi = i;
							}

					}

					cout << endl;

					cout << "Индекс наибольшего из нечетных по значению положительных элементов: " << endl;
					cout << "A[" << maxi << "]=" << A[maxi] << endl;

					cout << endl;

				system("pause");
				system("cls");
			}
			break;

			case 3:
			{
				/*3. Ввести массив, состоящий из 9 элементов (девять двузначных чисел) целого типа.
				Получить новый массив, состоящий из сумм цифр элементов исходного массива*/

				int A[9], B[9], a, b;

					for (i = 0; i < 9; i++)
					{
						A[i] = 10 + rand() % 50;
						cout << "A[" << i << "]=" << A[i] << "\t";

							a = A[i] / 10;
							b = A[i] % 10;
							B[i] = a + b;

					}

						cout << endl;

						for (i = 0; i < 9; i++)
						{
							cout << "B[" << i << "]=" << B[i] << "\t";
						}

					cout << endl;

				system("pause");
				system("cls");

			}
			break;

			case 4:
			{
				/*4. Даны действительные числа c1, c2, …, cn.
				Найти произведение суммы чисел с четными индексами
				и суммы чисел с нечетными индексами.*/

				int A[10], sumEven = 0, sumOdd = 0;

					for (i = 0; i < 10; i++)
					{
						A[i] = 1 + rand() % 10;
						cout << "A[" << i << "]=" << A[i] << "  ";

						if (i % 2 == 0) sumEven += A[i];
						if (i % 2 != 0) sumOdd += A[i];

					}

					cout << endl;

					cout << "Сумма чисел с четными индексами: " << sumEven << endl;
					cout << "Сумма чисел с нечетными индексами: " << sumOdd << endl;
					cout << "Произведение: " << sumEven*sumOdd << endl;

				system("pause");
				system("cls");

			}
			break;

			case 5:
			{
				/*5. Ввести массив, состоящий из 14 элементов действительного типа.
				Поменять местами первую половину со второй.
				Определить количество произведенных при этом перестановок.*/

				int A[14], B[7], count=0;

					for (i = 0; i < 14; i++)
					{
						A[i] = 10 + rand() % 50;
						cout << "A[" << i << "]=" << A[i] << "  ";

						if (i < 7) B[i + 7] = A[i];
						if (i > 6) B[i - 7] = A[i];
						count++;

					}

					cout << endl;

					for (i = 0; i < 14; i++)
					{
						cout << "B[" << i << "]=" << B[i] << "  ";
					}

					cout << endl;

					cout << "Количество перестановок: "<< count <<endl;

					cout << endl;

				system("pause");
				system("cls");

			}
			break;

			case 6:
			{
				/*6. Определить количество локальных максимумов в заданном числовом массиве.
				(Локальный максимум в числовом массиве – это последовательность трех рядом
				стоящих чисел, в которой среднее число больше стоящих слева и справа от него).*/

				int A[10], countmax = 0;

					for (i = 0; i < 10; i++)
					{
						A[i] = 1 + rand() % 30;
						cout << "A[" << i << "]=" << A[i] << "\t";
					}

					for (i = 0; i < 10; i++)
					{
						if ((A[i]<A[i + 1]) && (A[i + 1]>A[i + 2])) countmax++;
					}

					cout << endl;
					cout << "Количество локальных максимумов: " << countmax;
					cout << endl;

				system("pause");
				system("cls");

			}
			break;

			case 7:
			{
				/*7. В заданном числовом массиве определить и вывести индексы
				последовательностей чисел, которые монотонно убывают
				(каждое следующее число меньше предыдущего).*/

				int A[10], countmax = 0;

					for (i = 0; i < 10; i++)
					{
						A[i] = 1 + rand() % 30;
						cout << "A[" << i << "]=" << A[i] << "\t";
					}

					cout << endl;

					cout << "Элементы массива монотонно убывают на участках с индексами: " << endl;

					for (i = 0; i < 9; i++)
					{
						if (A[i] > A[i + 1])
						{
							cout << "от i=" << i << " до i=" << i + 1 << "; ";

						}
					}

					cout << endl;

				system("pause");
				system("cls");

			}
			break;

			case 8:
			{
				/*8. Ввести массив, состоящий из 10 элементов
				(десять двузначных чисел) целого типа.
				Получить новый массив, состоящий из разностей
				цифр элементов исходного массива.*/

				int A[10], B[10], a, b;

					for (i = 0; i < 10; i++)
					{
						A[i] = 10 + rand() % 50;
						cout << "A[" << i << "]=" << A[i] << "\t";

							a = A[i] / 10;
							b = A[i] % 10;
							B[i] = a - b;

					}

					cout << endl;

					for (i = 0; i < 10; i++)
					{
						cout << "B[" << i << "]=" << B[i] << "\t";
					}

					cout << endl;

				system("pause");
				system("cls");

			}
			break;

			case 9:
			{
				/*9. Задан целочисленный массив. Определить количество участков
				массива, на котором элементы монотонно возрастают
				(каждое следующее число больше предыдущего)*/

				int A[10], count = 0;

					for (i = 0; i < 10; i++)
					{
						A[i] = 1 + rand() % 30;
						cout << "A[" << i << "]=" << A[i] << "\t";
					}

					cout << endl;

					cout << "Элементы массива монотонно возрастают на участках: " << endl;

					for (i = 0; i < 9; i++)
					{
						if (A[i] < A[i + 1])
						{
							cout << "[" << i << ", " << i + 1 << "]; ";
							count++;
						}
					}

					cout << endl;
					cout << "Количество участков: " << count << endl;

					cout << endl;

				system("pause");
				system("cls");

			}
			break;

			case 10:
			{
				/*10. Ввести два массива действительных чисел.
				Определить максимальные элементы в каждом массиве
				и поменять их местами.*/

				double A[5], B[5], maxA = 0, maxB = 0;
				int maxAind, maxBind;

					for (i = 0; i < 5; i++)
					{
						A[i] = 1 + rand() % 30;
						cout << "A[" << i << "]=" << A[i] << "\t";

							if (A[i] > maxA)
							{
								maxA = A[i];
								maxAind = i;
							}

					}

					cout << endl;
					cout << "A[" << maxAind << "]=" << A[maxAind] << " - максимальный элемент.\t" << endl;
					cout << endl;

						for (i = 0; i < 5; i++)
						{
							B[i] = 20 + rand() % 50;
							cout << "B[" << i << "]=" << B[i] << "\t";

								if (B[i] > maxB)
								{
									maxB = B[i];
									maxBind = i;
								}

						}

						cout << endl;
						cout << "B[" << maxBind << "]=" << B[maxBind] << " - максимальный элемент.\t" << endl;
						cout << endl;

						int temp;

						temp = A[maxAind];
						A[maxAind] = B[maxBind];
						B[maxBind] = temp;

						cout << endl;

							for (i = 0; i < 5; i++)
							{

								cout << "A[" << i << "]=" << A[i] << "\t";

							}

							cout << endl;

							for (i = 0; i < 5; i++)
							{

								cout << "B[" << i << "]=" << B[i] << "\t";

							}

					cout << endl;

				system("pause");
				system("cls");

			}
			break;

			default:
			{
				cout << "Для выхода введите 0.";
			}
			break;
		
		}

	} while (n != 0);

}