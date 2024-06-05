#include <iostream>

int main() {
    #if __cplusplus >= 202002L
    std::cout << "C++20 or later" << std::endl;
    #elif __cplusplus >= 201703L
    std::cout << "C++17" << std::endl;
    #elif __cplusplus >= 201402L
    std::cout << "C++14" << stda::cout << "C++11" << std::endl;
    #elif __cplusplus >= 199711L
    std::cout << "C++98" << std::endl;
    #else
    std::cout << "C++ version not supported." << std::endl;
    #endif
    return 0;
}