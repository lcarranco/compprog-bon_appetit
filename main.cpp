#include <cstdio>
#include <iostream>
#include <fstream>

using namespace std;




void input(BigNumber *a, string filename, int digitsPerNode) {
    ifstream ifs(filename.c_str());

    int counter = 0;
    while (!ifs.eof()) {
        string line;
        ifs >> line;
        if (line.size() != 0) {
            a[counter] = BigNumber(line, digitsPerNode);
            counter++;
        }
    }
}

int main() {
    string line;
    ifstream ifs("input00.txt");
    ofstream ofs;
    int num;

    string filename = "input00.txt";

    input();

    if (ifs.is_open()) {
        ifs >> num;
        while (ifs.good()) {
            cout << num;
            c = ifs.get();
            // getline(cin, line);
            // cout << line << endl;
        }
    }
    cout << endl;
    return 0;
}