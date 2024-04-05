/*a function should only have one return statement - also, you cannot have two main functions*/
#include <iostream>
/*
int main() {
    int result = 2 + 2;
    std::cout << result << std::endl;
// char is only for a single character, use char[] to store a string //
    char word[] = "Hello";
    std::cout << word << std::endl;
    return 0; /*0 is placed as the return value must match the function type, which is INT
}
*/

int main() {
    std::cout << "enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "the sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
}