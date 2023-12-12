#include <iostream>

void input_data(int arr_1[4], float arr_2[4], int arr_3[4]);
void diff_sum(int arr_1[4], float arr_2[4]);

int main()
{
    int arr_1[4], arr_3[4];
    float arr_2[4];

    input_data(arr_1, arr_2, arr_3);
}

void input_data(int arr_1[4], float arr_2[4], int arr_3[4])
{
    for (int i = 0; i < 5; ++i)
    {
        std::cout << "Enter integer number " << i + 1 << " : " << std::endl;
        std::cin >> arr_1[i]; 
    }

    for (int i = 0; i < 5; ++i)
    {
        std::cout << "Enter float number " << i + 1 << " : " << std::endl;
        std::cin >> arr_2[i]; 
    }    
    diff_sum(arr_1, arr_2);
}

void diff_sum(int arr_1[4], float arr_2[4])
{
    float result[4];

    for (int i = 0, j = 4; i < 4, j >= 0; i++, j--)
    {
        if (arr_1[i] > arr_2[j])
            result[i] = arr_1[i] - arr_2[j];    
        else 
            result[i] = arr_1[i] + arr_2[j];
    }
}