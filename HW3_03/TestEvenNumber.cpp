#include <iostream>
#include <cmath>
#include "EvenNumber.h"
using namespace std;

int EvenNumber::getValue(int value)
{
	if (value % 2 == 0)
		return value;
	else
	{
		cout << "The number is not even!\n";
		return 1;
	}
}

int EvenNumber::getNext(int value)
{
	int new_number=value+2;
	return new_number;
}

int EvenNumber::getPrevious(int value)
{
	int new_number = value-2;
	return new_number;
}

int main()
{
	EvenNumber n;
	int number=n.getValue(16);
	if (number == 1)
		return 0;
	cout << "The current even number is " << number << endl;
	number=n.getNext(number);
	cout << "The next even number is " << number << endl;
	number=n.getPrevious(number);
	cout << "The previous even number is " << number << endl;
	return 0;
}