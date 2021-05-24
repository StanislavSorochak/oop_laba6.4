#include <iostream>
#include <string>

using namespace std;

template <typename T>
double averageValueOfModules(const T arr[], const int size);

template <typename T>
void Print(const T arr[], const int size);

int main()
{
    int arr[] = { 1, 2, 5, 7, -2, -55, -536 };
    Print(arr, size(arr));
    cout << "Average value of modules = " << averageValueOfModules(arr, size(arr)) << endl << endl;;

    double arrSecond[] = { 1.1, 2.5, 5.7, 7.6, -536.46 };
    Print(arrSecond, size(arrSecond));
    cout << "Average value of modules = " << averageValueOfModules<double>(arrSecond, size(arrSecond)) << endl << endl;

    return 0;
}

template <typename T>
double averageValueOfModules(const T arr[], const int size)
{
    T avarageValueOFModules = 0;

    for (int i = 0; i < size; i++)
        avarageValueOFModules += abs(arr[i]);

    return avarageValueOFModules / (size * 1.);
}
template <typename T>
void Print(const T arr[], const int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << "  ";
    cout << endl;
}