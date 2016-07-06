#include <bits/stdc++.h>
using namespace std;

void printNumber(int,int);
void song(int);

int main()
{
	
	for(int bottles = 99; bottles >= 1; bottles--)
	{
		song(bottles);
	}
	return 0;
}

void song(int bottles)
{
	int nTens = (bottles - (bottles % 10))/10;
	int nOnes = bottles - nTens * 10;
	
	printNumber(nTens, nOnes);
	cout << " bottles of beer on the wall, ";
	printNumber(nTens, nOnes);
	cout << " bottles of beer.\nTake one down, pass it around ";
	
	if(bottles != 0)
	{
		bottles--;
		nTens = (bottles - (bottles % 10))/10;
		nOnes = bottles - nTens * 10;
	}
	
	printNumber(nTens, nOnes);
	cout << " bottles of beer on the wall.\n\n";
}
void printNumber(int tens, int ones)
{
	switch(tens)
	{
		case 9: cout << "Ninety"; break;
		case 8: cout << "Eighty"; break;
		case 7: cout << "Seventy"; break;
		case 6: cout << "Sixty"; break;
		case 5: cout << "Fifty"; break;
		case 4: cout << "Forty"; break;
		case 3: cout << "Thirty"; break;
		case 2: cout << "Twenty"; break;
		case 1: 
		{
			switch(ones)
			{
				case 9: cout << "Nineteen"; break;
				case 8: cout << "Eighteen"; break;
				case 7: cout << "Seventeen"; break;
				case 6: cout << "Sixteen"; break;
				case 5: cout << "Fifteen"; break;
				case 4: cout << "Fourteen"; break;
				case 3: cout << "Thirteen"; break;
				case 2: cout << "Twelve"; break;
				case 1: cout << "Eleven"; break;
				case 0: cout << "Ten"; break;
			}
			break;
		}
	}
	if(ones > 0 && tens > 1) cout << "-";
	if(tens != 1)
	{
		switch(ones)
		{
			case 9: cout << "Nine"; break;
			case 8: cout << "Eight"; break;
			case 7: cout << "Seven"; break;
			case 6: cout << "Six"; break;
			case 5: cout << "Five"; break;
			case 4: cout << "Four"; break;
			case 3: cout << "Three"; break;
			case 2: cout << "Two"; break;
			case 1: cout << "One"; break;
			case 0: 
			{
				if(tens == 0 || tens == 1) cout << "Zero"; break;
			}
		}
	}
}