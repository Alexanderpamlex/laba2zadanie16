#include <iostream>
using namespace std;
void sort(int* const arr,const int size) 
{
    int a;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[i-1])
        {
            a = arr[i]; arr[i] = arr[i - 1]; arr[i - 1] = a;
        }
        for (int j = 1; j < size; j++)
        {
            if (arr[j]>arr[j-1]) 
            {
                a = arr[j]; arr[j] = arr[j - 1]; arr[j - 1] = a;
            }

        }
    }
}
int main()
{
    srand(time(NULL));
    int size = 10;
    int* arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand()%11;
    }
    cout << "Before////////////////////////////////////////////////" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;

    }
    
    sort(arr,size);
    cout << "After/////////////////////////////////////////////////" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;

    }
    delete [] arr;

    







}