

#include <iostream>
#include <stdlib.h>

using namespace std;

class FuncionesLambda
{

public:
	template<class... Args>
	auto MCD(Args... args);

	template <class... Args>
	auto MCM(Args... args);

};

template<class... Args>
auto FuncionesLambda::MCD(Args... args) {

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
auto FuncionesLambda::MCM(Args... args) {

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

