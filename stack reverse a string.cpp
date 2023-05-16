#include <iostream>
#include <stack>
#include <string>

void reverse(const std::string& a) {
    std::stack<std::string> b;
//initialiing a empty string to enter the reversed 
//string  
    std::string word = "";
//loop for for reversing the string
    for (int i = 0; i < a.length(); i++) {
//till  a space occeurs in program it continues to 
//add the word into the empty string
        while (a[i] != ' ' && i < a.length()) {
            word += a[i];
            i++;
        }
//word is push and because of lifo property 
//the last word is printed first
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