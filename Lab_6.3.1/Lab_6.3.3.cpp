#include<iostream>
#include<iomanip>
#include<time.h>
using namespace std;

void create(int* arr, int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = 50. * rand() / RAND_MAX - 20;
	}
}

//template <typename T>
//void create2(T* arr, int SIZE)
//{
//	for (int i = 0; i < SIZE; i++)
//	{
//		arr[i] = 50. * rand() / RAND_MAX - 20;
//	}
//}

void show(int *arr,int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << setw(4) << arr[i];
	}
	cout << endl;
}

//template <typename T>
//void show2(T* arr, int SIZE)
//{
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << setw(4) << arr[i];
//	}
//	cout << endl;
//}

void sort(int* arr,int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		int k = 0;
		for (int j = 0; j < SIZE-1; j++)
		{
			if (arr[j]<arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				k = 1;
			}
		}
		if (k==0)
		{
			return;
		}
	}
}

template <typename T>
void sort2(T* arr, int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		int k = 0;
		for (int j = 0; j < SIZE - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				T tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				k = 1;
			}
		}
		if (k == 0)
		{
			return;
		}
	}
}

int main() 
{
	srand((unsigned)time(NULL));

	const int SIZE = 25;
	int arr[SIZE];

	create(arr, SIZE);
	show(arr, SIZE);
	sort(arr, SIZE);
	show(arr, SIZE);
	cout << endl;
	cout << endl;
	create(arr, SIZE);
	show(arr, SIZE);
	sort2(arr, SIZE);
	show(arr, SIZE);
	cout << endl;
	
	//create2(arr, SIZE);
	//show2(arr, SIZE);
	//sort2(arr, SIZE);
	//show2(arr, SIZE);
	
	return 0;
}