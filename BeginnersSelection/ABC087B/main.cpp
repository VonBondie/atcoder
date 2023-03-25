#include <iostream>
using namespace std;

int main() {
    int n500, n100 ,n50;    
    int target;
    cin >> n500;
    cin >> n100;
    cin >> n50; 
    cin >> target;

    int count = 0;
    for(size_t i = 0; i <= n500 ; i++) {
        for(size_t j = 0; j <= n100; j++) {
            for(size_t k = 0; k <= n50; k++) {
                int total_price = i * 500 + j * 100 + k * 50;
                if (total_price == target) count++;
            }
        }
    }

    std::cout << count << std::endl;
    return 0;
}