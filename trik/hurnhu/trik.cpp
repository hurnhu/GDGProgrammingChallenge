#include <iostream>
#include <string>

void swapIt(int, int, int*);

int main()
{
    int ballLocation[3] = { 1, 0, 0 };
    std::string input;
    std::getline(std::cin, input);
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == 'A')
        {
            swapIt(0,1,ballLocation);
        }
        else if (input[i] == 'B')
        {
            swapIt(1, 2, ballLocation);
        }
        else {
            swapIt(0, 2, ballLocation);
        }
    }
    for (size_t i = 0; i < 3; i++)
    {
        if (ballLocation[i] == 1)
        {
            std::cout << i+1;
        }
    }
    return 0;
}

void swapIt(int to, int from, int *arr) {
    int temp1 = 0;
    temp1 = arr[to];
    arr[to] = arr[from];
    arr[from] = temp1;
}
