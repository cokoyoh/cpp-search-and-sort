#include <iostream>
#include <array>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    const size_t arraySize{7};
    array<string, arraySize> colors{"red", "orange", "yellow", "green", "blue", "indigo", "violet"};

    cout << "Unsorted array:\n";
    for (const string& color: colors) {
        cout << color << " ";
    }

    //sort the colors
    sort(colors.begin(), colors.end());

    cout << "\n\nSorted array:\n";
    for(const string& color: colors) {
        cout << color << " ";
    }

    //search for "indigo" in colors
    bool found{binary_search(colors.begin(), colors.end(), "indigo")};
    cout << "\n\n\"indigo\" "
        << (found ? "was" : "was not")
        << " found in colors"
        << endl;

    found = binary_search(colors.begin(), colors.end(), "cyan");
    cout << "\n\n\"cyan\" "
         << (found ? "was" : "was not")
         << " found in colors"
         << endl;
}
