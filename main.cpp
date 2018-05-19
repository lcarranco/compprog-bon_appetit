#include <cstdio>
#include <iostream>
#include <queue>
#include <vector>
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
    vector<int> bill;
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

    for (int i = 0; i < numberItemsOrdered; ++i) {
        totalPrice += numbers.front();
        bill.push_back(numbers.front());
        // cout << bill.at(i) << ' ';
        numbers.pop();
    }
    numbers.pop();
    // cout << totalPrice << endl;

    totalPricePerPerson = totalPrice/numberPeoplepaying;
    // cout << totalPricePerPerson << endl;
    
    excludedItemPrice = bill.at(indexItemToExclude);
    // cout << excludedItemPrice << endl;

    correctPricePerPerson = (totalPrice - excludedItemPrice) / numberPeoplepaying;
    cout << correctPricePerPerson << endl;


    cout << endl;
    return 0;
}