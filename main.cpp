#include <cstdio>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;


int main() {
    string line;
    vector<int> numbers;
    int value;
    while (getline(cin, line)) {
        stringstream ss(line);
        while (ss >> value) {
            numbers.push_back(value);
        }
    }

    for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << ' ';
    }
    cout << endl;
    return 0;
}