// CPP_Timsochinhphuong.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
bool checkSNT(int so);

int main()
{
	int so;
	cin >> so;
	for (int i = 1; i <= so; i++)
	{
		if (checkSNT(i)) cout << i << " ";
	}
}

bool checkSNT(int so) {
	if ((int)sqrt(so) == sqrt(so)) return true;
	return false;
}

   