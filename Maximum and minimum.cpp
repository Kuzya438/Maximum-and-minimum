#include <iostream>
#include <cstdlib>

int main() {
	setlocale(LC_ALL, "RU");

	const int size{ 10 };
	int integerArray[size]{ 55, 211, 3, 43, 5, 76, 7, 8, 947, 10 };
	int min{ integerArray[0] }, max{ integerArray[0] };

	std::cout << "Массив: ";

	for (int element{}; element < size; ++element) {
		std::cout << integerArray[element] << " ";
		if (min > integerArray[element]) { min = integerArray[element]; }
		if (max < integerArray[element]) { max = integerArray[element]; }
	}

	std::cout << std::endl << "Минимальный элемент: " << min << std::endl;;
	std::cout << "Максимальный элемент: " << max << std::endl;;

	return EXIT_SUCCESS;
}
