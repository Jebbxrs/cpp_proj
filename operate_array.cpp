#include <iostream>
#include <iomanip>

void input_data(int arr_1[4], float arr_2[4]);
void diff_sum(int arr_1[4], float arr_2[4], float arr_3[4]);
void print_values(int arr_1[4], float arr_2[4], float arr_3[4]);

int main()
{
    int arr_1[4];
    float arr_2[4], arr_3[4];

    input_data(arr_1, arr_2);
    diff_sum(arr_1, arr_2, arr_3);
    return 0;
}

void input_data(int arr_1[4], float arr_2[4])
{   
    std::cout << "Enter 5 integer numbers: ";
    std::cin >> arr_1[0] >> arr_1[1] >> arr_1[2] >> arr_1[3] >> arr_1[4]; 
    std::cout << "Enter 5 float numbers: ";
    std::cin >> arr_2[0] >> arr_2[1] >> arr_2[2] >> arr_2[3] >> arr_2[4];   
    return;
}

void diff_sum(int arr_1[4], float arr_2[4], float arr_3[4])
{
    for (int i = 0, j = 4; i < 5, j >= 0; i++, j--)
    {
        if (arr_1[i] > arr_2[j])
            arr_3[i] = arr_1[i] - arr_2[j];    
        else 
            arr_3[i] = arr_1[i] + arr_2[j];
    }
    print_values(arr_1, arr_2, arr_3);
    return;
}

void print_values(int arr_1[4], float arr_2[4], float arr_3[4])
{
    for (int i = 0, j = 4; i < 5, j >= 0; i++, j--)
    {
        if (arr_1[i] > arr_2[j])
            std::cout << arr_1[i] << " - " << arr_2[j] << " = " << std::fixed << std::setprecision(2) << arr_3[i] << std::endl;
        else 
            std::cout << arr_1[i] << " + " << arr_2[j] << " = " << std::fixed << std::setprecision(2) << arr_3[i] << std::endl;
    }
    return;
}
