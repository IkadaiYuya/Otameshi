#pragma once
#if !Included
#define Included
#include <iostream>
#include <string>
#endif

/*------------------------------------------
//�������l�p�`�ŕ\��
//
------------------------------------------*/


class NumbersSquare
{
	//---------------------------------------
	//---------------menber------------------

	// �O���ƂȂ�l
	private int m_maxNumber;

	//---------------------------------------
	//---------------method------------------
	
	// constructor constructor
	NumbersSquare();

	// copy constructor
	NumbersSquare(int num = 0) : m_maxNumber(num) {};

	// numbers prints
	public void PrintNumbers();


};