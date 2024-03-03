#include <iostream>

#define DAY_MIN 1
#define DAY_MAX 100000
#define PROFIT_MIN -1000
#define PROFIT_MAX 1000

int maxConsecutiveProfit(int array[], int n);

int main() {
    int n;
    int temp;

    std::cin >> temp;

    while (temp < DAY_MIN || temp > DAY_MAX) {
        std::cin >> temp;
    }
    n = temp;

    int profits[n];

    for (int i = 0; i < n; i++) {
        std::cin >> temp;

        while (temp < PROFIT_MIN || temp > PROFIT_MAX) {
            std::cin >> temp;
        }
        profits[i] = temp;
    }

    std::cout << maxConsecutiveProfit(profits, n);
}

int maxConsecutiveProfit(int array[], int n) {
    int sumMax = array[0];
    int sum = array[0];

    for (int i = 1; i < n; i++) {
        sum = std::max(array[i], sum + array[i]);
        sumMax = std::max(sum, sumMax);
    }

    return sumMax;
}
