/*******************************
 *                             *
 * Луцаев Владислав Николаевич *
 *          ПИ-261             *
 *   Lab Линейные уравнения    *
 *                             *
 *******************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double nu1, nu2, nu3;
	double K;
	const double a = 5.54;
	const double b = 3.93;
	const double yu = 1.45;
	double T1;
	double T2;

	cout << "yu = " << yu << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	K = (yu - 1) / yu;
	cout << "K = " << K << endl;
	T1 = 288 * K;
	cout << "T1 = " << T1 << endl;
	T2 = 675 * K;
	cout << "T2 = " << T2 << endl;

	nu1 = 1 - (pow(1 / b, K));
	cout << "nu1 = " << nu1 << endl;

	double help1 = (T2 - T1) / ((yu - 1) * log(a));
	nu2 = (T2 - T1) / (T2 + help1);
	cout << "nu2 = " << nu2 << endl;

	nu3 = 1 - (K * (log(b) / (pow(b, K) - 1)));
	cout << "nu3 = " << nu3 << endl;
}