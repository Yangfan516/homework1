#include<iostream>
using namespace std;
const int N = 10;
int main()
{
	double weight[N];
	double price[N];
	double pWeight[N];
	double w;
	int i, j, k;
	cout << "�������������M=";
	cin >> w;
	cout << "����������������";
	for (i = 0; i < N; i++)
		cin >> weight[i];
	cout << "���������ļ�ֵ��";
	for (i = 0; i < N; i++)
	{
		cin >> price[i];
		pWeight[i] = price[i] / weight[i];
	}
	for (j = 0; j < N - 1; j++)
	{
		for (k = 0; k < N - 1; k++)
		{
			float temp, tempW, tempP;
			if (pWeight[k] < pWeight[k + 1])
			{
				temp = pWeight[k];
				pWeight[k] = pWeight[k + 1];
				pWeight[k + 1] = temp;
				tempP = price[k];
				price[k] = price[k + 1];
				price[k + 1] = tempP;
				tempW = weight[k];
				weight[k] = weight[k + 1];
				weight[k + 1] = tempW;
			}
		}
	}
	cout << "������������������ĸ����飺/n";
	cout << "������ر�����:/n";
	for (i = 0; i < N; i++)
		cout << pWeight[i] << " ";
	cout << endl;
	cout << "������������:/n";
	for (i = 0; i < N; i++)
		cout << weight[i] << " ";
	cout << endl;
	cout << "�����ֵ����:/n";
	for (i = 0; i < N; i++)
		cout << price[i] << " ";
	cout << endl;
	int sumW = 0;
	float sumP = 0;
	int num = 0;
	while ((sumW + weight[num]) < w&&num < N)
	{
		sumW = sumW + weight[num];
		sumP = sumP + price[num];
		num++;
	}
	cout << "װ��������=" << sumW << endl;
	cout << "װ���ܼ�ֵ=" << sumP << endl;
	cout << "װ���������=" << num << endl;
	return 0;
}
