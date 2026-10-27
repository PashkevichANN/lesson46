#include "util.h"
#include "logic.h"
#define DEFAULT_SIZE 100

int main() {
	int array[DEFAULT_SIZE]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	//int rsch;
	int size = 10; 
	/*cout << "Input number which you want to research: ";
	cin >> rsch;*/

	/*do {
		system("cls");
		print("Input size of array: ");
		cin >> size;
	} while (size < 1 || size > DEFAULT_SIZE);

	*/


	/*init(array, size, -50, 50);*/


	print("\nArray elements: ");
	print(convert(array, size));

	int value = 20;

	cout << binary_search(array, size, value);
	/*int max = get_max_element(array, size);
	int min = get_min_element(array, size);
	double arithmetical_avg = get_arithmetical_avg(array, size);
	double geometrical_avg = get_geometrical_avg(array, size);
	string research_number = get_positions_of_research_number(array, size, rsch);

	print("\nResult: max = " + to_string(max));
	print("\n min= " + to_string(min));
	print("\n arithmetical_avg= " + to_string(arithmetical_avg));
	print("\n geometrical_avg= " + to_string(geometrical_avg));
	print("\n" + research_number);*/



	return 0;
}