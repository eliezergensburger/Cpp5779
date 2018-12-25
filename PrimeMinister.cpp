// AUTHORS:		Eliezer Gensburger & Plony Almony
//ID:			09090980980	&	123456789
//TITTLE:		exercise 5 part 4
//SUBJECT:		someting doing with the course
//DESCRIPTION:
/********************************************************
*														*
*	Sometimes it is need to describe the program with	*
*	more details. This is generally not necessary for	*
*	the first course in Computer Science Intro			*
*	àôùø âí áòáøéú åáìáã ùæä éåãôñ âí áòáøéú.			*
*														*
********************************************************/

#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

bool isPrime(unsigned int);
int findPrime(int);

int main()
{
	int godeltavla;

	srand((unsigned int)time(nullptr));

	cout << "enter number of values:" << endl;
	cin >> godeltavla;

	if (godeltavla <= 0)
	{
		godeltavla = rand() % (100 - 10 + 1) + 10; 		
	}

	cout << "table size : " << findPrime(godeltavla) << endl;

	system("pause");
	return 0;
}

bool isPrime(unsigned int number)	// number == מספר
{
	unsigned int shoresh = (unsigned int)ceil(sqrt((double)number));
	for (size_t i = 2; i < shoresh; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
}

int findPrime(int number)
{
	int counter = number;
	while (!isPrime(counter))
	{
		++counter;
	}
	return counter;
}
