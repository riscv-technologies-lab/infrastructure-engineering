#include "fibonacci_sequence.h"
#include "arithmetic_progression.h"

std::vector<int> FibonacciSequence::generate(int first, int second, int diff, int terms) {
    std::vector<int> sequence = {first, second};
    
    std::vector<int> ap_diff = ArithmeticProgression::generate(diff, diff, terms - 2);

    for (size_t i = 0; i < ap_diff.size(); ++i) {
        sequence.push_back(sequence.back() + ap_diff[i]);
    }

    return sequence;
}

