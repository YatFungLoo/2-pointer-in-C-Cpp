#include <iostream>
#include <string>

void swap(int &i, int &j) {
    int temp = i;
    i = j;
    j = temp;
}

void swapByPointer(int *i, int *j) {
    int temp = *i;
    *i = *j;
    *j = temp;
}

bool isEqual(char &i, char &j) { return i == j ? true : false; }

bool isEqualByPointer(char *i, char *j) { return *i == *j ? true : false; }

bool isPalindrome(std::string &s) {
    if (s.empty())
        return false;
    bool truth = false;
    for (int i = 0; i < (s.size() / 2); i++) {
        // std::string does not have '\0' hence minus 1
        !isEqual(s[i], s[s.size() - 1 - i]) ? truth = false : truth = true;
    }
    return truth;
}

bool isPalindromeByPointer(char *s, int size) {
    if (size == 0)
        return false;
    bool truth = false;
    for (int i = 0; i < (size / 2); i++) {
        // char[] string has '\0' null terminator hence minus 2
        !isEqualByPointer(&s[i], &s[size - 2 - i]) ? truth = false : truth = true;
    }
    return truth;
}

int main() {
    int i = 1;
    int j = 2;
    swap(i, j);
    std::cout << "i: " << i << ", j: " << j << std::endl;

    int *temp_i = &i;
    swapByPointer(temp_i, &j);
    std::cout << "i: " << i << ", j: " << j << std::endl;

    std::string s = "lev3vel";
    if (isPalindrome(s))
        std::cout << "By Reference: " << s << " is a palindrome." << std::endl;

    char c_str[] = "lev3vel";
    int c_str_size = sizeof(c_str) / sizeof(*c_str);
    if (isPalindromeByPointer(c_str, c_str_size))
        std::cout << "By Ponter: " << s << " is a palindrome." << std::endl;

    return 0;
}
