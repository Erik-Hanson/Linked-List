#include <iostream>
#include <cmath>
#include "linkedlist.h"
#include <time.h>
#include <stdlib.h>
using namespace std;

void randomInsert(class list)
{
	srand (time(NULL));
	int randomAmount = rand() % 13 + 6;
	cout << randomAmount << endl;

	for(int i = 0; i < randomAmount; i++)
	{
		int randomNumber = rand() % 100 + 1;
		//insertToList
		cout << randomNumber << " ";
	}
}

int main() 
{
	list linkedlist;
	randomInsert(linkedlist);
	return 0;
}
