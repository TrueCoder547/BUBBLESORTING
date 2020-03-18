#include <iostream>
using namespace std;
int* BubbleSort(int array[], int size);
int main() {
	setlocale(NULL, "");
	const int size = 8;
	int array[size] = { 0, 8, 2, 3, 5, 4, 1, 9 };
	int* ptrarray = new int[size];
	ptrarray = BubbleSort(array, size);
	return 0;
}
int* BubbleSort(int array[], int size)
{
	for (int i = 0; i < size; i++)
		for (int j = i; j < size; j++)
			if (array[j] < array[i])
				swap(array[j], array[i]);
	for (int i = 0; i < size; i++)
		cout << array[i] << "\t";
	return array;
}
