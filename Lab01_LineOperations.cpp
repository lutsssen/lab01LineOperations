/*******************************
 * Луцаев Владислав Николаевич *
 *          ПИ-261             *
 *   Lab Линейные уравнения    *
 *          4 Вариант          *
 *******************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double efficiency1, efficiency2, efficiency3;
	double numberOfCompressionStages;
	const double degreeOfVolumeReduction = 5.54;
	const double gasCompressionRatio = 3.93;
	const double adiabaticIndex = 1.45;
	double temperatureOfFirstProcess;
	double temperatureOfSecondProcess;

	cout << "Adiabatic index = " << adiabaticIndex << endl;
	cout << "Degree of volume reduction = " << degreeOfVolumeReduction << endl;
	cout << "Gas compression ratio = " << gasCompressionRatio << endl;

	numberOfCompressionStages = (adiabaticIndex - 1) / adiabaticIndex;
	cout << "Number of Compression Stages = " << numberOfCompressionStages << endl;
	temperatureOfFirstProcess = 288 * numberOfCompressionStages;
	cout << "Temperature of the first process = " << temperatureOfFirstProcess << endl;
	temperatureOfSecondProcess = 675 * numberOfCompressionStages;
	cout << "Temperature of the second process = " << temperatureOfSecondProcess << endl;

	efficiency1 = 1 - (pow(1 / gasCompressionRatio, numberOfCompressionStages));
	cout << "answer1 = " << efficiency1 << endl;

	double help1 = (temperatureOfSecondProcess - temperatureOfFirstProcess) / ((adiabaticIndex - 1) * log(degreeOfVolumeReduction));
	efficiency2 = (temperatureOfSecondProcess - temperatureOfFirstProcess) / (temperatureOfSecondProcess + help1);
	cout << "answer2 = " << efficiency2 << endl;

	efficiency3 = 1 - (numberOfCompressionStages * ((gasCompressionRatio) / (pow(gasCompressionRatio, numberOfCompressionStages) - 1)));
	cout << "answer3 = " << efficiency3 << endl;
}