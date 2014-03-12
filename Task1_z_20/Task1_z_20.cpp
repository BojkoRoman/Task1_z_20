/**
*@file Task1_z_20
*@brief Solution (C++ code) of Task1.20 GL 
* (�������������� ����� ���� �� ���������� ��������, �������� �������, 
*  ��� ������ �������� ���� �������� ������������ ������� ������ ����� �� r ��� ����.)
*Copyright 2014 by Roman Bojko
*/
#include <stdio.h>
#include <iostream>
using namespace std;
typedef unsigned int uint;
void printBinCode (uint n) 
{
	cout<<"Binary code "<<n<<" - ";/**< ������������ �������� ���*/
	uint temp = n;
	for( int i = 1; i >= 0; i-- )
		cout<<((n>>i)&1);
	    cout<<endl;
};
uint cyclicLeftShift(uint p,uint n)
{
	uint temp = p >> (sizeof(p)*8-n);/**< ����������� ���, �� ������ �������*/
	p <<= n;/**< �������� �������*/
	return temp|p; /**< ���, �� �������� �� ���� �*/
};
int main(void)
{
	uint numb,bn,res;
	cout<<"Enter a number"<<endl;
	cin>>numb;
	cout<<"Enter a number bits"<<endl;
	cin>>bn;
	printBinCode(numb);
	printBinCode(bn);
	res=cyclicLeftShift(numb,bn);
	printBinCode(res);
	getchar();
	getchar();
	return 0;
}