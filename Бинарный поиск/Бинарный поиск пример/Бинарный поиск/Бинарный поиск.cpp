#include <iostream>
using namespace std;

void binarySearch(int data_array[], int element, int len)
{
    int low = 0;
    int high = len;
    while (low <= high)
    {
        int mid = (low + high) / 2;//среднее значение
        int guess = data_array[mid];

        if (guess == element)
        {
            cout << "Элемент найден в  " << mid << " индекс" << endl;
            return;
        }
        else if (guess > element)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << "Элемент не найден" << endl;
    return; //number not found
}
int main()
{
    setlocale(0, "rus");
    int data_array[] = { 2,10,23,44,100,121 };
    int length = sizeof(data_array) / sizeof(int);

    binarySearch(data_array, 3, length);  // не найден
    binarySearch(data_array, 2, length); // найден в углу
    binarySearch(data_array, 44, length); //найден в серидине
    return 0;
}


