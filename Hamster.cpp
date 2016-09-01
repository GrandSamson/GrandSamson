#include <iostream>
using namespace std;
int main()
{
	int x,y,d,i;
	cout << "Enter Hasmat's soldiers and his opponents: " << endl;
	
	while (i < 3)
	{
	cin >> x >> y;
	i++;
	}
	
	for(i=0; i<3; i++)
	{
		d=0;
			for(i=0; i<3; i++)
			{
			d = y - x;
			}
	}
	cout << d;
}
