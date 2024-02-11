#pragma once
#include <numeric>
#include <type_traits>
#include <iostream>

template<typename T, int64_t N>
T arithmeticAverage(const T(&arr)[N])
{
	if (!std::is_arithmetic<T>::value)
	{
		throw std::invalid_argument("T must be an arithmetic type");
	}

	if (N <= 0)
	{
		throw std::invalid_argument("N must be greater than zero");
	}

	return std::accumulate(arr, arr + N, T()) / N;
}

//-----------------------------------------------------------------------------

template<typename T, int64_t N>
void printArray(const T(&arr)[N])
{
	for (int64_t i = 0; i < N; ++i)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}