

//201433920 ÇÑ³ª¿µ
#include <iostream>
using namespace std;

int cal(int n)
{
	return (n*n*n);
}

int main()
{
	int i, j, k;
	int x, y, z;
	int n, result;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			for (z = 0; z < 10; z++)
			{

				n = (x * 100) + (y * 10) + z;

				i = cal(x);
				j = cal(y);
				k = cal(z);

				result = i + j + k;

				if (n == result)
				{
					cout << n << "= " << x << "^3 +" << y << "^3 +" << z << "^3" << endl;
				}
			}
		}
	}

