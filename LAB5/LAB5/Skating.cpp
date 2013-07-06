#include <iostream>
#include <string>

using namespace std;
float num = 0;
float maxnum = 0;
float minnum = 0;
float total = 0;
int count = 0;

int main()
{
cout << "Enter judge's numbers (negative number to terminate input): " << endl;
cin >> num;
maxnum = num;
minnum = num;
count = 1;
total = total + num;

while (num >=0 )
{
	cin >> num;
		if (num <=0 )
		{
			cout << "Maximum: " << maxnum << endl;
			cout << "Minimum: " << minnum << endl;
			cout << "Total before removing of max and min: " << total << endl;
			cout << "Number: " << (count) << endl;
			total = (total - maxnum - minnum );
			cout << "Calculated Average: " << (total/(count-2)) << endl;
		}
				
		else if (num > maxnum)
		{
			maxnum = num;
			total = total + num;
			count++;
		}
		else if (num < minnum)
		{
			minnum = num;
			total = total + num;
			count++;
		}
		else
		{
			total = total + num;
			count++;

		}
		
	
}

}







