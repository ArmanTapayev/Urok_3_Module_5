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
		cout << "\n������� ����� �������: ";
		cin >> n;

		switch (n)
		{
	
			case 1:
			{
				/*1. ������ ��� ������� �������������� �����, ��������� �� 9 � 7 ���������.
				������������ ������ ������ �� ������������� �� ����������� �������� ����� ��������*/

				double A[9], B[7], C[16];

					cout << "������ ������: " << endl;

						for (i = 0; i < 9; i++)
						{
							A[i] = 10 + rand() % 50;
							cout << "A[" << i << "]=" << A[i] << "  ";
							C[i] = A[i];
						}

						cout << endl;
						cout << endl;

					cout << "������ ������: " << endl;

						for (i = 0; i < 7; i++)
						{
							B[i] = 10 + rand() % 50;
							cout << "B[" << i << "]=" << B[i] << "  ";
							C[i + 9] = B[i];
						}

						cout << endl;
						cout << endl;

					cout << "����� ������ �� ����������: " << endl;

						for (i = 0; i < 16; i++)
						{
							cout << "C[" << i << "]=" << C[i] << "  ";
						}

						cout << endl;
						cout << endl;

					cout << "����� ������ ����� ����������: " << endl;

						for (int i = 1; i < 16; i++)  // ��� ���� ��������� ����� ����������
						{
							int value = C[i];         // ���������� �������� ��������
							int index = i;            // � ��� ������

								while ((index > 0) && (C[index - 1] > value))
								{
									// ������� ������ �������� � ����� ������� ���� ��� ������ index
									C[index] = C[index - 1];
									index--;    // ������� �������� � ������ �������
								}

							C[index] = value; // ��������������� ������� �������� �� �������������� �����

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
				/*2. � �������� ������������� ������� R(9) ���������� ������ �����������
				�� �������� �� �������� ������������� ���������*/

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

					cout << "������ ����������� �� �������� �� �������� ������������� ���������: " << endl;
					cout << "A[" << maxi << "]=" << A[maxi] << endl;

					cout << endl;

				system("pause");
				system("cls");
			}
			break;

			case 3:
			{
				/*3. ������ ������, ��������� �� 9 ��������� (������ ���������� �����) ������ ����.
				�������� ����� ������, ��������� �� ���� ���� ��������� ��������� �������*/

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
				/*4. ���� �������������� ����� c1, c2, �, cn.
				����� ������������ ����� ����� � ������� ���������
				� ����� ����� � ��������� ���������.*/

				int A[10], sumEven = 0, sumOdd = 0;

					for (i = 0; i < 10; i++)
					{
						A[i] = 1 + rand() % 10;
						cout << "A[" << i << "]=" << A[i] << "  ";

						if (i % 2 == 0) sumEven += A[i];
						if (i % 2 != 0) sumOdd += A[i];

					}

					cout << endl;

					cout << "����� ����� � ������� ���������: " << sumEven << endl;
					cout << "����� ����� � ��������� ���������: " << sumOdd << endl;
					cout << "������������: " << sumEven*sumOdd << endl;

				system("pause");
				system("cls");

			}
			break;

			case 5:
			{
				/*5. ������ ������, ��������� �� 14 ��������� ��������������� ����.
				�������� ������� ������ �������� �� ������.
				���������� ���������� ������������� ��� ���� ������������.*/

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

					cout << "���������� ������������: "<< count <<endl;

					cout << endl;

				system("pause");
				system("cls");

			}
			break;

			case 6:
			{
				/*6. ���������� ���������� ��������� ���������� � �������� �������� �������.
				(��������� �������� � �������� ������� � ��� ������������������ ���� �����
				������� �����, � ������� ������� ����� ������ ������� ����� � ������ �� ����).*/

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
					cout << "���������� ��������� ����������: " << countmax;
					cout << endl;

				system("pause");
				system("cls");

			}
			break;

			case 7:
			{
				/*7. � �������� �������� ������� ���������� � ������� �������
				������������������� �����, ������� ��������� �������
				(������ ��������� ����� ������ �����������).*/

				int A[10], countmax = 0;

					for (i = 0; i < 10; i++)
					{
						A[i] = 1 + rand() % 30;
						cout << "A[" << i << "]=" << A[i] << "\t";
					}

					cout << endl;

					cout << "�������� ������� ��������� ������� �� �������� � ���������: " << endl;

					for (i = 0; i < 9; i++)
					{
						if (A[i] > A[i + 1])
						{
							cout << "�� i=" << i << " �� i=" << i + 1 << "; ";

						}
					}

					cout << endl;

				system("pause");
				system("cls");

			}
			break;

			case 8:
			{
				/*8. ������ ������, ��������� �� 10 ���������
				(������ ���������� �����) ������ ����.
				�������� ����� ������, ��������� �� ���������
				���� ��������� ��������� �������.*/

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
				/*9. ����� ������������� ������. ���������� ���������� ��������
				�������, �� ������� �������� ��������� ����������
				(������ ��������� ����� ������ �����������)*/

				int A[10], count = 0;

					for (i = 0; i < 10; i++)
					{
						A[i] = 1 + rand() % 30;
						cout << "A[" << i << "]=" << A[i] << "\t";
					}

					cout << endl;

					cout << "�������� ������� ��������� ���������� �� ��������: " << endl;

					for (i = 0; i < 9; i++)
					{
						if (A[i] < A[i + 1])
						{
							cout << "[" << i << ", " << i + 1 << "]; ";
							count++;
						}
					}

					cout << endl;
					cout << "���������� ��������: " << count << endl;

					cout << endl;

				system("pause");
				system("cls");

			}
			break;

			case 10:
			{
				/*10. ������ ��� ������� �������������� �����.
				���������� ������������ �������� � ������ �������
				� �������� �� �������.*/

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
					cout << "A[" << maxAind << "]=" << A[maxAind] << " - ������������ �������.\t" << endl;
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
						cout << "B[" << maxBind << "]=" << B[maxBind] << " - ������������ �������.\t" << endl;
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
				cout << "��� ������ ������� 0.";
			}
			break;
		
		}

	} while (n != 0);

}