#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main()
{
	vector<int> arr;
	string mid, str;
	getline(cin, str);
	stringstream temp(str);
	while (temp >> mid)
		arr.push_back(stoi(mid));
	QuickSort qs;
	arr = qs.sort(arr);
	RecursiveBinarySearch binarySearch;
	bool result = binarySearch.search(arr, 1);
	if (result == true)
		cout << "true ";
	else
		cout << "false ";
	int len = arr.size();
	for (int i = 0; i < len; i++)
		cout << arr[i] << " ";
	cout << " " << endl;

	return 0;
}