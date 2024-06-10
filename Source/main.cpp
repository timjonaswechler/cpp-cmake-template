#include <iostream>

#ifndef PROJECT_NAME
#define PROJECT_NAME "Unknown"
#endif

#ifndef PROJECT_VERSION
#define PROJECT_VERSION "Unknown"
#endif

int main() {
    // Your code here
    std::cout << "Welcome to " << PROJECT_NAME << " Version: " << PROJECT_VERSION << std::endl;
    return 0;
}