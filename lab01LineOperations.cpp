/********************************
 * Луцаев Владислав Николаевич  *
 * Lab Линейные уравнения       *
 * 4 Вариант                    *
 *******************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double efficiency1, efficiency2, efficiency3;
	double numberOfCompressionStages;
	double degreeOfVolumeReduction = 5.54;
	double gasCompressionRatio = 3.93;
	double adiabaticIndex = 1.45;
	double temperature1;
	double temperature2;

	cout << "Adiabatic index = " << adiabaticIndex << endl
		 << "Degree of volume reduction = " << degreeOfVolumeReduction << endl
		 << "Gas compression ratio = " << gasCompressionRatio << endl;

	numberOfCompressionStages = (adiabaticIndex - 1.0) / adiabaticIndex;

	cout << "Number of Compression Stages = " << numberOfCompressionStages << endl;

	temperature1 = 288.0 * numberOfCompressionStages;
	temperature2 = 675.0 * numberOfCompressionStages;

	cout << "Temperature of the first process = " << temperature1 << endl
		 << "Temperature of the first process = " << temperature2 << endl;

	efficiency1 = 1.0 - (pow(1.0 / gasCompressionRatio, numberOfCompressionStages));
	efficiency2 = (temperature2 - temperature1) / (temperature2 + ((temperature2 - temperature1) / ((adiabaticIndex - 1.0) * log(degreeOfVolumeReduction))));
	efficiency3 = 1.0 - (numberOfCompressionStages * ((log(gasCompressionRatio)) / (pow(gasCompressionRatio, numberOfCompressionStages) - 1.0)));

	cout << "Efficiency of first process = " << efficiency1 << endl
		 << "Efficiency of second process = " << efficiency2 << endl
		 << "Efficiency of third process = " << efficiency3 << endl;
}

