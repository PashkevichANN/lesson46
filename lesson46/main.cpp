#include "util.h"
#include "logic.h"
#define DEFAULT_SIZE 100

int main() {
	int array[DEFAULT_SIZE];

	int size; 
	
	do {
		system("cls");
		print("Input size of array: ");
		cin >> size;
	} while (size < 1 || size > DEFAULT_SIZE);

	init(array, size, -50, 50);


	print("\nArray elements: ");
	print(convert(array, size));

	int max = get_max_element(array, size);
	int min = get_min_element(array, size);
	double arithmetical_avg = get_arithmetical_avg(array, size);
	double geometrical_avg = get_geometrical_avg(array, size);

	print("\nResult: max = " + to_string(max));
	print("\n min= " + to_string(min));
	print("\n arithmetical_avg= " + to_string(arithmetical_avg));
	print("\n geometrical_avg= " + to_string(geometrical_avg));



	return 0;
}