#include <iostream>

int getASCII(char c);

int main() {
    bool quit_flag = false;

    while (!quit_flag) {
        char ch;
        std::cout << "Enter a character:\n";
        std::cin >> ch;
        if (ch == '.') {
            quit_flag = true;
        }

        std::cout << "ASCII Value For The Character Is: " << getASCII(ch) << std::endl;
        std::cout << "Press . to exit" << std::endl;
    }

    return 0;
}

int getASCII(char c) {
    int ascii_value = int(c);
    return ascii_value;
}