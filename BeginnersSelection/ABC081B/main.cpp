#include <iostream>
#include <vector>
using namespace std;

bool isAllEven(vector<int>& A) {
    bool even_flag = true;
    for(size_t i = 0; i < A.size(); i++) {
        even_flag &= (A.at(i) % 2 == 0) ? true : false;
    }
    return even_flag;
}

void divAllElemBy2(vector<int>& A) {
    for(size_t i = 0; i < A.size(); i++) {
        A.at(i) /= 2;
    }
}

int main() {
    int N;
    vector<int> A; 

    cin >> N;
    A.resize(N);

    for(size_t i = 0; i < N; i++) {
        cin >> A.at(i);
    }

    int count = 0;
    while(isAllEven(A)) {
        divAllElemBy2(A);
        count++;
    }
    cout << count;

    return 0;
}