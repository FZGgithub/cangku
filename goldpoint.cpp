#include <iostream>
#include<math.h>
using namespace std;
void main()
{
	int i, j, n, num, N, M, S[100], S2[100], S3[100] = { 0 };
	double S1[100], ave, sum, G;
	double max, min;
	cout << "==============��ӭ����ƽ����Ϸ!=============" << endl;
	cout << "============== HELP ==============" << endl;
	cout << "=========N�����(Nͨ������10)������Ϸ=========" << endl;
	cout << "==ÿ��дһ��0~100֮��������� (������0��100)==" << endl;
	cout << "===========G=Nλ���ƽ��ֵ*0.618==============" << endl;
	cout << "======��߷�(N): �ύ������ӽ�Gֵ�����======" << endl;
	cout << "=====��ͷ�(-2):�ύ���־���Gֵ��Զ�����=====" << endl;
	cout << "===========������(0): �����������============" << endl;
	cout << "��������ϷҪ���е�������" << endl;
	cin >> N;
	cout << "�����������Ϸ��������" << endl;
	cin >> M;
	for (i = 1; i <= N; i++)
	{
		sum = 0;
		G = 0;
		cout << "Input the number between 1 to 100." << endl;
		for (j = 1; j <= M; j++)
		{
			cout << " Player " << j << " input your choose!" << endl;
			cin >> num;
			S[j] = num;
			sum = sum + S[j];
		}
		ave = sum / num;
		G = ave*0.618;
		cout << "�ƽ����G=" << G << endl;
		for (j = 1; j <= M; j++)
		{
			S1[j] = abs(S[j] - G);
		}
		max = min = S1[1];
		for (j = 1; j <= M; j++)
		{
			if (S1[j] >= max)
				max = S1[j];
			else if (S1[j] < min)
				min = S1[j];
		}
		for (j = 1; j <= M; j++)
		{
			if (S1[j] == max)
				S2[j] = -2;
			else if (S1[j] == min)
				S2[j] = M;
			else S2[j] = 0;

		}
		for (j = 1; j <= M; j++)
		{
			cout << "���ַ���" << "S2[" << j << "]=" << S2[j] << endl;

		}
	}
	for (j = 1; j <= M; j++)
	{
		for (i = 1; i <= N; i++)
		{
			S3[j] = S3[j] + S2[j];	
		}
		
		cout << "�ܷ��� " << "S3[" << j << "]=" << S3[j] << endl;
	}
	system("pause");
}