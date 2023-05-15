#include <iostream>
#include <stack>
#include <string>

void reverse(const std::string& a) {
    std::stack<std::string> b;
    std::string word = "";

    for (int i = 0; i < a.length(); i++) {
        while (a[i] != ' ' && i < a.length()) {
            word += a[i];
            i++;
        }
        b.push(word);
        word = "";
    }

    while (!b.empty()) {
        std::cout << b.top() << " ";
        b.pop();
    }
}

int main() {
    std::string a;
    std::cout << "Enter a string: ";
    std::getline(std::cin, a);
    reverse(a);
    return 0;
}