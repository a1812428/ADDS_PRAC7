#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(vector<int> arr, int num)
{
	int len = arr.size();
	if (len == 0)
		return false;
	int mid = len / 2;
	if (num == arr[mid])
		return true;
	else if (num < arr[mid])
	{
		arr = vector<int>(arr.begin(), arr.begin() + mid);
		return search(arr, num);
	}
	else if (num > arr.at(mid))
	{
		arr = vector<int>(arr.begin() + mid + 1, arr.end());
		return search(arr, num);
	}
	return false;
}