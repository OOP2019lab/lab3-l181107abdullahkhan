
#include<iostream>
using namespace std;


int main()
{
	int arr[10] = { 0 };
	int index = 0;
	int val = 0;
	int temp = 0;
	cout << "enter number" << endl;
	for (int i = 0; i < 9; i++)
		cin >> arr[i];

	cout << "enter number to be entered" << endl;
	cin >> val;
	cout << "enter index" << endl;
	cin >> index;
	temp = index;
	for (int i = 10; i>index;i--)
	{
		arr[temp ] = arr[temp-1];
		
	}
	arr[index] = val;
	
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] <<endl;
	}



	return 0;



	}