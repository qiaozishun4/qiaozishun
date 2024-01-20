#include <iostream>
#include <iomanip>
#include <istream>
#include <ostream>
#include <string>
using namespace std;

int Mark(int c, int m)
{
	return (c < 60 || m < 60);
}

int main(){

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (Mark(i, j) != ((i < 60) || (j < 60)))
			{
				printf("%d, %d, %d, %d", i, j, ((i < 60) || (j < 60)), Mark(i, j));
			}
		}
	}
	return 0;
}
