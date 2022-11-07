//
// Developed by Volodymyr Smetaniuk on 02.11.2022.
//

#include <iostream>
#include <cassert>
using namespace std;

// swap replaces two elements with each other.
template <typename T>
void swap(T* leftValue, T* rightValue){
    T temp = *leftValue;
    *leftValue = *rightValue;
    *rightValue = temp;
}

// isSorted checks if arr elements are in ascending order.
template <typename T>
bool isSorted(T* arr, int size) {
    for(int i = 0; i < size - 1; i++)
        if(arr[i] > arr[i+1])
            return false;
    return true;
}

// areSameElements checks if copied array has same elements as original array.
template <typename T>
bool areSameElements(const T* originalArray, const T* copiedArray, int size) {
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++) {
            if (originalArray[i] == copiedArray[j]) break;
            else {
                if (j == size - 1) return false;
                continue;
            }
        }
    return true;
}

// sort returns sorted input array in ascending order. input array is not changing.
template <typename T>
T* sort(const T* arr, int size) {
    // copying input array.
    T* copiedArray = new T[size];
    for (int i = 0; i < size; ++i)
        copiedArray[i] = arr[i];

    // sorting array using bubble sort.
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (copiedArray[j] > copiedArray[j + 1])
                swap(copiedArray[j], copiedArray[j + 1]);

    // check task conditions.
    assert(areSameElements(arr, copiedArray, size));
    assert(areSameElements(copiedArray, arr, size));
    assert(isSorted(copiedArray, size));

    return copiedArray;
}

template <typename T>
void printArray(T* arr, int size) {
    for(int i = 0; i < size; i++)
        cout<<arr[i]<<((i == size-1) ? " " : ", ");
}

int main() {
    cout<<"First check."<<endl;
    {
        const int size = 30;
        int* arr = new int[size]{5, -66, 12, 23, 67, 45, 89, 56, 34, 23, 1234, 455, -123, -12333, 876, 47, 4, 2, 9087, 567, 4, 21, -12345, 1, 2, 3, 9, 8, 7, 0};
        int* sortedArr = sort(arr, size);

        cout<<"input array:  ";
        printArray(arr, size);
        cout<<endl;

        cout<<"output array: ";
        printArray(sortedArr, size);
        cout<<endl<<endl;

        delete[] arr;
        delete[] sortedArr;
    }

    cout<<"Second check."<<endl;
    {
        const int size = 15;
        char* arr = new char[size]{'a', 'w', '4', 'F', 'q', 'Q', 'h', '0', '\\', ':', 'c', 'd', 'g', 'i', '8'};
        char* sortedArr = sort(arr, size);

        cout<<"input array:  ";
        printArray(arr, size);
        cout<<endl;

        cout<<"output array: ";
        printArray(sortedArr, size);
        cout<<endl<<endl;

        delete[] arr;
        delete[] sortedArr;
    }

    cout<<"Third check."<<endl;
    {
        const int size = 45;
        double* arr = new double[size]{371.2020, 1.1974, -860.0099, 836.0097, 548.2838, 311.5488, 281.8255, -749.2948, 367.3625, 785.9467, 123.0016, -303.0692, -468.4311, 838.2268, 109.3177, -755.7168, 98.7382, 625.3058, 997.7557, -102.3626, -404.8344, -403.0504, 137.8854, 957.3617, -286.6568, 894.0029, -187.1876, 308.8339, 158.4602, -831.4314, 131.6400, 632.4719, -773.8986, 641.9611, 313.7012, 383.4480, 169.8550, 960.4099, 747.2369, -297.2886, -1.1916, 687.7437, -397.6383, 49.6486, -853.0515};
        double* sortedArr = sort(arr, size);

        cout<<"input array:  ";
        printArray(arr, size);
        cout<<endl;

        cout<<"output array: ";
        printArray(sortedArr, size);
        cout<<endl<<endl;

        delete[] arr;
        delete[] sortedArr;
    }
}