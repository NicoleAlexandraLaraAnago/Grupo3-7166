#include <iostream>
using namespace std;
auto mcd = [](int numeros[3]) -> int {
	int mcd = 0, res, i;
	for (i = 0; i < 3; i++)
	{
		if (i == 0)
		{
			mcd = numeros[i];
		}
		else {
			do {
				res = mcd % numeros[i];
				if (res != 0)
				{
					mcd = numeros[i];
					numeros[i] = res;
				}
				else {
					mcd = numeros[i];
				}
			} while (res != 0);
		}

	}
	return mcd;
};

auto mcm = [](int numeros[3]) -> int {
	int mcm = 0, res, producto;
	int i;
	for (i = 0; i < 3; i++)
	{
		if (i == 0)
		{
			mcm = numeros[i];
			producto = numeros[i];
		}
		else {
			producto = mcm * numeros[i];
			do {
				res = mcm % numeros[i];
				mcm = numeros[i];
				numeros[i] = res;
			} while (res != 0);
			mcm = producto / mcm;
		}

	}
	return mcm;
};
int main()
{
	cout << "Usando parametros quemados" << endl;

	int numeros1[3] = { 6, 24, 80 };

    cout<<"Valores: 6 24 80"<<endl;

	cout << "El MCD es: " << mcd(numeros1) << endl;
	cout << "El MCM es: " << mcm(numeros1) << endl;
    cout<<"\n";
}