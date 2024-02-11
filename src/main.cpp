#include <iostream>
#include "functions.h"

int main() {

	const int N = 5;

	try
	{
		int iArr[N] = { 0, 4, 6, 2, 8 };
		printArray(iArr);
		std::cout << "Average = " << arithmeticAverage(iArr) << "\n\n";

		float fArr[N] = { 0.3, 4.5, -6.1, 2.8, 8. };
		printArray(fArr);
		std::cout << "Average = " << arithmeticAverage(fArr) << "\n\n";

		double dArr[N] = { 1.8, -4.25, 6.47, -2., 8.17 };
		printArray(dArr);
		std::cout << "Average = " << arithmeticAverage(dArr) << "\n\n";
	}
	catch (const std::exception& ex)
	{
		std::cout << "Error: " << ex.what() << "\n";
	}
	catch (...)
	{
		std::cout << "Something went wrong\n";
	}
	

	return 0;
}