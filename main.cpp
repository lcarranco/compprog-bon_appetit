#include <cstdio>
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string line;
    ifstream ifs("input00.txt");
    ofstream ofs;

    if (ifs.is_open()) {
        char c = ifs.get();
        while (ifs.good()) {
            cout << c;
            c = ifs.get();
            // getline(cin, line);
            // cout << line << endl;
        }
    }
    cout << endl;
    return 0;
}