#include <cstdio>
#include <iostream>
#include <queue>
#include <sstream>

using namespace std;


int main() {
    string line;
    int value;
    queue<int> numbers;
    while (getline(cin, line)) {
        stringstream ss(line);
        while (ss >> value) {
            numbers.push(value);
        }
    }

    int numberPeoplepaying = 2;
    int numberItemsOrdered = numbers.front();
    // cout << numberItemsOrdered << endl;
    numbers.pop();
    int indexItemToExclude = numbers.front();
    // cout << indexItemToExclude << endl;
    numbers.pop();
    int amountCharged = numbers.back();
    // cout << amountCharged << endl;
    int totalPrice = 0;
    int excludedItemPrice = 0;
    int totalPricePerPerson = 0;
    int correctPricePerPerson = 0;
    int refund = 0;
    

    while (!numbers.empty()) {
        cout << numbers.front() << ' ';
        numbers.pop();
    }
    cout << endl;
    return 0;
}