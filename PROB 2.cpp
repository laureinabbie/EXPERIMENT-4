#include <iostream>
using namespace std;
int main()
{
	int size, i, j, temp, arr[i];
	cout << "Selection Sorting... \n";
	cout << "Enter the array size: "; cin >> size;
	cout << "Enter the " << size << " elements: \n";
	for (i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << "After using selection sort... \n\n";
	cout << "Sorted data: ";
	for(i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
