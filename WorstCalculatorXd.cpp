#include <iostream>

int main()
{
    
 std::cout << R"(
  __  __           _        ____              _                            
 |  \/  | __ _  __| | ___  | __ ) _   _   ___| |__   ___   ___  _ __ _ __  
 | |\/| |/ _` |/ _` |/ _ \ |  _ \| | | | / __| '_ \ / _ \ / _ \| '__| '_ \ 
 | |  | | (_| | (_| |  __/ | |_) | |_| | \__ \ | | | (_) | (_) | |  | | | |
 |_|  |_|\__,_|\__,_|\___| |____/ \__, | |___/_| |_|\___(_)___/|_|  |_| |_|
                                  |___/                                    
)" << '\n';

   double num1, num2;
    char THEDAMNoperation;

    std::cout << "Welcome to the WORST calculator OF WORLD!" << std::endl;
    std::cout << "Please choose the damn operation (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter the fricking first number: ";
    std::cin >> num1;
    std::cout << "Enter the fricking second number: ";
    std::cin >> num2;

    switch (THEDAMNoperation) {
        case '+':
            std::cout << "THE Result: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "THE Result: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "THE Result: " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                std::cout << "THE Result: " << num1 / num2 << std::endl;
            } else {
                std::cout << "A BIG Error: DON'T YOU GO TO SCHOOL? Division by zero is not allowed YOU SMALL BRAIN KID!" << std::endl;
            }
            break;
        default:
            std::cout << "Invalid operation YOU BRAINLESS CREATURE!" << std::endl;
    }

return 0;
}
