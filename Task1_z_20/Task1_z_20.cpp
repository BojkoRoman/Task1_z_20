/**
*@file Task1_z_20
*@brief Solution (C++ code) of Task1.20 GL 
* (Використовуючи тільки бітові та арифметичні операції, написати функцію, 
*  яка виконує циклічний зсув заданого беззнакового довгого цілого числа на r бітів уліво.)
*Copyright 2014 by Roman Bojko
*/
#include <stdio.h>
#include <iostream>
using namespace std;
typedef unsigned int uint;
void printBinCode (uint n) 
{
	cout<<"Binary code "<<n<<" - ";/**< роздрукувати двійковий код*/
	uint temp = n;
	for( int i = 1; i >= 0; i-- )
		cout<<((n>>i)&1);
	    cout<<endl;
};
uint cyclicLeftShift(uint p,uint n)
{
	uint temp = p >> (sizeof(p)*8-n);/**< зберігаються біти, які будуть втрачені*/
	p <<= n;/**< робиться зміщення*/
	return temp|p; /**< біти, які втратили до кінця р*/
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
