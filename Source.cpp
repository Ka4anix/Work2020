#include <iostream> // ����������� ������� �����/������
#include <cmath>
#include <stdio.h>
#include <ctime>

using namespace std; // ����� �� ���������� std::cin

void processArray(int, int);

void processArraiTOR(int, int, int);

const int n = 15;//������ 2 ������� ��� ������
int* mas = new int[15];
	
    int i;
    int c;

    void processArray(int* mas, int i)//�������
    {
        int a; //��� ��������� (�������� a)
        int b; //��� ��������� (�������� b)
        int r; //��� ���������� ��������
        cout << "a=-";//���� ������
        cin >> a;
        cout << "b=";
        cin >> b;
       
        srand(time(0));
        int tw = 1;
        for (int i = 0; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                r = rand() % b + (-a); //��������� �������� �� -� �� b 
                mas[i] = mas[i]*r;
               
                r = 0;
            }
        }

    }


    void processArraiTOR(int* mas, int i, int c)//������� ��� �������� ������������� � ������ 2 �������
    {

        c = 0;
        for (int i = 0; i <= n; i++)
        {
            if (mas[i] < 0)
            {
                c = c + 1;//������� �������������
            }
        }
    }

int main()
{
    setlocale(LC_ALL, "Russian");//������� ���� � �������
    for (i = 0; i < n; ++i)
    {
    mas[i] = 1;
    };//������ ������

    int d[15] = { 0 };
   
    cout << mas;
    cout << d;

    processArray(mas, i);
    
	cout << "[����]" << endl;
	for (i = 0; i < n; ++i)
	{
		cout << mas[i] << " ";
	}
    cout << endl;
     processArraiTOR(mas, i, c);
     cout << "[�����]" << endl;
     for (i = 0; i < n; ++i)
     {
         if (mas[i] < 0)
         {
             d[i]=mas[i];
         }

         
         cout << d[i] << " ";
     }
     cout << endl;
     cout <<"���-�� �����.="<<c;
    return 0;
}