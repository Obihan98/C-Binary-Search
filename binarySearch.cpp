#include<iostream>
using namespace std;


int binarySearch(const int array[], int size, int value)
{
    int first = 0, 
        last = size - 1, 
        position = -1,
        middle;
    
    bool isFound = 0;

    while (!isFound && first <= last)
    {
        middle = (first + last) / 2;

        if (array[middle] == value)
        {
            isFound = 1;
            position = middle;
        }

        else if (array[middle] > value)
        {
            last = middle - 1;
        }

        else
        {
            first = middle + 1;
        }
    }
    return position;
}


int main()
{
    const int SIZE = 10;
    int search;
    int numbers[SIZE] = {8, 23 ,45, 56, 67, 78, 89, 90, 93, 95};

    cout << "Search: ";
    cin >> search;
    
    cout << binarySearch(numbers, SIZE, search);
    
    return 0;
}