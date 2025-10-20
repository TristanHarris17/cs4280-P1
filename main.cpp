#include "scanner.h"

#include <fstream>
#include <iostream>

int main(int argc, char **argv) {
    std::string filename;

    if (argc == 2) { // filename provided
        filename = argv[1];
        testScanner(filename);
    } else if (argc == 1) { // no filename, read from stdin
        std::cout << "Taking keyboard input" << std::endl;
        std::cin >> filename;
        testScanner(filename);
    } else {
        std::cerr << "Usage: " << argv[0] << " <name>" << std::endl;
        return 1;
    }
    return 0;
}