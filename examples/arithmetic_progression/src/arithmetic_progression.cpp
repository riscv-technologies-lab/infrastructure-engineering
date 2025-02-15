
#include <vector>
#include "arithmetic_progression.h"

std::vector<int> ArithmeticProgression::generate(int first, int diff, int terms) {
    std::vector<int> sequence;
    for (int i = 0; i < terms; ++i) {
        sequence.push_back(first + i * diff);
    }
    return sequence;
}

