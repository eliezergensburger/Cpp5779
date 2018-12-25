
//AUTHORS:		Eliezer Gensburger & Plony Almony
//ID:			09090980980	&	123456789
//TITTLE:		exercise x part y
//SUBJECT:		someting doing with the course
//DESCRIPTION:
/********************************************************
*														*
*	Sometimes it is need to describe the program with	*
*	more details. This is generally not necessary for	*
*	the first course in Computer Science Intro			*
*	אפשר גם בעברית ובלבד שזה יודפס גם בעברית.			*
*														*
********************************************************/

#include <iostream>
using namespace std;


void initMaarach(bool* ,const int);
void EratosthenesSieve(bool[],const int);
void printPrimes(bool*, const int);

int main()
{
	const int GODEL = 200;

	//bool misparim[121];
	bool misparim[GODEL];
	initMaarach(misparim,GODEL);
	EratosthenesSieve(misparim,GODEL);
	printPrimes(misparim, GODEL);
	system("pause");
	return 0;
}
void initMaarach(bool* vec,const int GODEL) //bool* vec = misparim;
{
	//bool* vec = misparim;
	vec[0] = vec[1] = false;
	for ( int i = 2; i < GODEL; i++)
	{
		vec[i] = true; // misparim[i] = false;
	}
}

void EratosthenesSieve(bool vec [],const int GODEL ) //bool vec [] = misparim;
{
	int p =2;
	//vec[p] = true;
	do
	{
		int i = p;
		//simum hakfulim shel p
		do
		{
			if ((i+1) % p == 0)
			{
				vec[i+1] = false;
			}
			++i;
		} while (i <= GODEL);
		
		//kidum shel p larishoni haba
		do
		{
			++p;
		} while (p <= GODEL && vec[p] == false);

	} while (p <= GODEL);
}

void printPrimes(bool* vec, const int size)
{
	for (int i = 0; i < size; i++)
	{
		if (vec[i])
		{
			cout << i << " " << endl;
		}
	}
}