

#include <iostream>
#include <stdlib.h>

using namespace std;

template<class... Args>
auto MCD(Args... args) {

	auto mcd = [args...]{
		int mcd = 0, res;
	int i = 0;
		for (auto numero : { args... })
	{
			if (i == 0)
			{
				mcd = numero;
				i = 1;
			}
			else {
				do {
					res = mcd % numero;
					if (res != 0)
					{
						mcd = numero;
						numero = res;
					}
					else {
						mcd = numero;
					}
				} while (res != 0);
			}

	}
	return mcd;
	};
	return mcd();

}


template<class... Args>
auto MCM(Args... args) {

	auto mcm = [args...]{
		int mcm = 0, res, producto;
	int i = 0;
		for (auto numero : { args... })
	{
			if (i == 0)
			{
				mcm = numero;
				producto = numero;
				i = 1;
			}
			else {
				producto = mcm * numero;
				do {
					res = mcm % numero;
					mcm = numero;
					numero = res;
				} while (res != 0);
				mcm = producto / mcm;
			}

	}
	return mcm;
	};
	return mcm();

}


int main()
{
	int a = 6;
	int b = 24;
	int c = 80;
	int d = 4;
	int e = 8;
	int f = 32;


	cout << "El MCD es: " << MCD(a, b, c, d, e, f) << endl;
	cout << "El MCM es: " << MCM(a, b, c, d, e, f) << endl;

}

