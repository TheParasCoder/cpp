#include <iostream>
#include <string>
using namespace std;

int main() {
    char temp;
    int i, j;
    string name = "paras";
    int len = name.length();
    cout << "Length of the string: " << len << endl;

    // Bubble sort to sort the characters of the string
    for (i = 0; i < len-1; i++) {
        for (j = 0; j < len-i-1; j++) {
            if (name[j] > name[j+1]) {
                temp = name[j];
                name[j] = name[j+1];
                name[j+1] = temp;
            }
        }
    }

    cout << "Sorted string: " << name << endl;

    return 0;
}
