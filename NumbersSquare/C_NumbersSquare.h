#pragma once
#if !Included
#define Included
#include <iostream>
#include <string>
#endif

/*------------------------------------------
//数字を四角形で表現
//
------------------------------------------*/


class NumbersSquare
{
	//---------------------------------------
	//---------------menber------------------

	// 外周となる値
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