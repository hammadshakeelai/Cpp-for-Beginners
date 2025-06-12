#include <iostream>
//#include <vector>
using namespace std;
//void add(vector<int>& v, int x) { v.push_back(x); }

void add(int*&array,int& arr_size, int new_element){
	int* p = new int[arr_size];
	for(int i=0;i<arr_size;i++)
		p[i] = array[i];
	delete [] array;
	array = new int[arr_size+1];
	for(int i=0;i<arr_size;i++)
		array[i] = p[i];
	delete [] p;
	array[arr_size] = new_element;
	arr_size++;
}
int main()
{
	// vector<int> v(3);
	// for (int i = 0; i < 3; ++i)
    //     v[i] = i * 3;
    // for (int x : v)
	//     cout << x << "\n";
    // cout << "----\n";
    // add(v, 7);
int j =0;
int* arr;
arr = new int[10];
for(int k=0;k<10;k++){
	cout<<k+1<<" "<<j++<<endl;
}
cout<<"--\n";
delete [] arr;
arr = new int[5];
for(int k=0;k<5;k++){
	cout<<k+1<<" "<<j++<<endl;
}
delete [] arr;
cout<<"--\n";
int arr_size = 3;
arr = new int[arr_size];
for(int i=0;i<arr_size;i++)
	arr[i] = i*3;
for(int i=0;i<arr_size;i++)
	cout<<arr[i]<<endl;
cout<<"----\n";
add(arr,arr_size,7);
for(int i=0;i<arr_size;i++)
	cout<<arr[i]<<endl;
cout<<"----\n";
add(arr,arr_size,2);
for(int i=0;i<arr_size;i++)
	cout<<arr[i]<<endl;
delete [] arr;
	return 0;
}
// This code demonstrates how to dynamically add elements to an array in C++.
// It uses a function to resize the array and add a new element, ensuring memory is managed correctly.
// The code also includes a simple demonstration of the process in the main function.
// The output will show the contents of the array before and after adding new elements.