#include <iostream>
#include <cstring> 

using namespace std;

class Solution {
public:
    void reverseString(char s[], int left, int right) {
        reverseStringHelper(s, left, right);
    }

private:
    void reverseStringHelper(char s[], int left, int right) {
        // Base case: when the pointers have crossed each other
        if (left >= right) {
            return;
        }

        // Swap the characters at left and right
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        // Recursive call with pointers moved towards the center
        reverseStringHelper(s, left + 1, right - 1);
    }
};

int main() {
    char str[] = {'h', 'e', 'l', 'l', 'o'}; 
    Solution s;

    s.reverseString(str, 0, strlen(str) - 1); // Call the method to reverse the string

    cout << "Reversed string: " << str << endl;

    return 0;
}

