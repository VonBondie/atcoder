#include <iostream>
#include <atcoder/all>
using namespace std;

int main() {
    string str;
    cin >> str;

    int count = 0;
    for (size_t i = 0; i < str.size(); i++) {
       if (str.c_str()[i] == '1') count++; 
    }
    cout << count << endl;
    return 0;
}