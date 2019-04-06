#include "C_NumbersSquare.h"
using namespace std;

NumbersSquare::NumbersSquare()
{
	int tmpNum = 0;
}

void NumbersSquare::PrintNumbers()
{
	for (int i = 0; i < m_maxNumber; ++i)
	{
		for (int j = 0; j < m_maxNumber; ++j)
		{
			cout << m_maxNumber << " ";
		}
		puts("");
	}
}