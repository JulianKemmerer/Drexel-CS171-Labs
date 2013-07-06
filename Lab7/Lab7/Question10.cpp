#include <iostream>
#include "ccc_time.h"
#include <string>

using namespace std;

template<class T>
void swap1(T&a, T&b) ;


int main()
{
	string winner_name;
	int winner_age, winner_weight;
	int hours1,min1,sec1;
	string loser_name;
	int loser_age, loser_weight;
	int hours2,min2,sec2;

	cout << "Name 1: ";
	getline(cin,winner_name);
	cin.ignore();
	cout << "Age 1: ";
	cin >> winner_age;
	cout << "Weight 1: ";
	cin >> winner_weight;
	cout << "Time 1: (Hours Mins Sec) ";
	cin >> hours1 >> min1 >> sec1;
	cout << "Name 2: ";
	getline(cin,loser_name);
	cin.ignore();
	cout << "Age 2: ";
	cin >> loser_age;
	cout << "Weight 2: ";
	cin >> loser_weight;
	cout << "Time 2: (Hours Mins Sec) ";
	cin >> hours2 >> min2 >> sec2;

	if (hours1 == hours2)
	{
		if (min1 == min2)
		{
			if (sec1 == sec2)
			{
				//Tie
				cout << "It was a tie.";

			}
			
			else if (sec1 > sec2)
			{
				//Swap
				swap1(winner_name,loser_name);
				swap1(winner_age,loser_age);
				swap1(winner_weight,loser_weight);
				swap1(hours1,hours2);
				swap1(min1,min2);
				swap1(sec1,sec2);



			}
		}
		else if (min1 > min2)
		{
			//Swap
			swap1(winner_name,loser_name);
				swap1(winner_age,loser_age);
				swap1(winner_weight,loser_weight);
				swap1(hours1,hours2);
				swap1(min1,min2);
				swap1(sec1,sec2);
		}
	}
	else if (hours1 > hours2)
	{
		//Swap
		swap1(winner_name,loser_name);
				swap1(winner_age,loser_age);
				swap1(winner_weight,loser_weight);
				swap1(hours1,hours2);
				swap1(min1,min2);
				swap1(sec1,sec2);
	}
	return 0;

}

template<class T>
void swap1(T&a, T&b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;

}