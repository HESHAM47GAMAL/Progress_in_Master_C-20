#include <iostream>

int AddNumber(int num1, int num2)
{

    return num1 + num2;
}

int main(){
    
    int firstNum {10};
    int secondNum {7};
    int sum = firstNum + secondNum ;
    std::cout << sum << "\n";
    sum = AddNumber(15,25);

    std::cout << sum;
    return 0;
}