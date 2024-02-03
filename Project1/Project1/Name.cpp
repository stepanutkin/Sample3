#include <iostream>
#include <vector>

class DivisibleByThreeCounter {
private:
    int sum;
    int count;

public:
    DivisibleByThreeCounter() : sum(0), count(0) {}

    void operator()(int num) {
        if (num % 3 == 0) {
            sum += num;
            count++;
        }
    }

    int get_sum() const {
        return sum;
    }

    int get_count() const {
        return count;
    }
};

int main() {
    DivisibleByThreeCounter counter;

    std::vector<int> numbers = { 1, 3, 6, 9, 12, 15, 18, 21, 24 };

  
    for (const int& num : numbers) {
        counter(num);
    }

    std::cout << "Sum of numbers divisible by 3: " << counter.get_sum() << std::endl;
    std::cout << "Count of numbers divisible by 3: " << counter.get_count() << std::endl;

    return 0;
}