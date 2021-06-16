#include <iostream>

void Swap (int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void PrintArray(int* arr)
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << *(arr + i) << "\t";
    }
    std::cout << "\n";
    return;
}

void InitializeArray(int* arr)
{
    for (int i = 0; i < 10; i++)
    {
        *(arr + i) = i+1;
    }
}

int* Reverse (int* arr)
{
    for (int i = 0; i < 5; i ++)
    {
        Swap(arr + i, arr + 9 - i);
    }
    return arr;
}

int main() {

    int input_arr[10];
    InitializeArray(input_arr);

    std::cout << "Direct order: \n";
    PrintArray(input_arr);

    int* output_arr = Reverse(input_arr);

    std::cout << "Reversed order: \n";
    PrintArray(output_arr);
    
    return 0;
}
