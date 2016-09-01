// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;
double expected(double x, double y);
double elocalc(double x, double z, int y);
int main()
{
	double felo;
	double oelo;
	double e;
	int win;
	double k;
	cout << "Please enter first elo\n";
	cin >> felo;
	cout << "please enter opp elo\n";
	cin >> oelo;
	cout << "please enter win or loss 1 or 0\n";
	cin >> win;
	e = expected(felo, oelo);
	cout << e << endl;
	k = elocalc(felo, e, win);
	cout << k <<endl;
	
	
	
	
	
	cout << "enter anything to exit\n";
	int hold;
	cin >> hold;
	
	return 0;
}
double expected(double x, double y)
{
	double chance;
	double hold;
	hold = y - x;
	hold = hold / 400;
	hold = pow(10, hold);
	chance = hold + 1;
	chance = 1 / chance;
	return chance;
}
double elocalc(double x, double z, int y)
{
	double newelo;
	newelo = y - z;
	newelo = 32 * newelo;
	newelo = x + newelo;
	return newelo;
}
