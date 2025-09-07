#include<iostream>

int main()
{
    std::cout << "********CALCULATOR********\n\n";

    double num1, num2, result;
    char choice;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter your choice: ";
    std::cin >> choice;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    switch (choice)
    {
    case '+':
        result = num1 + num2;
        break;

    case '-':
        result = num1 - num2;
        break;

    case '*':
        result = num1 * num2;
        break;

    case '/':
        result = num1 / num2;
        break;

    default:
        std::cout << "Invalid choice try again!";
    }
    std::cout << num1 << " " << choice << " " << num2 << " = "  << result << "\n\n";
    return 0;
}
