#ifndef FIBONACCI_SEQUENCE_H
#define FIBONACCI_SEQUENCE_H

#include <vector>

class FibonacciSequence {
public:
    static std::vector<int> generate(int first, int second, int diff, int terms);
};

#endif // FIBONACCI_SEQUENCE_H

