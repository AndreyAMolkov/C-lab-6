#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#include "task4.h"
long long int sumC(char *arr, int len)// -������������ ������� ������
{
		long long summ = 0;
		int i = 0;
		for (i=0;i < len;i++)
			summ += arr[i] - '0';
		
		return summ;
}
long long int sumR(char *arr, int len)// -������������ ������� ���������
{
	
	if (len == 0)
		return 0;
		else
			return	sumR((arr + 1), len - 1) + (*arr - '0');
	
}