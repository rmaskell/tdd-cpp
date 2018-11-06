#include "fibonacci.h"
#include <vector>

vector<int> GenerateFibonacciSequence(int length) {
    vector<int> sequence;
    for(int i = 0; i < length; i++) {
        if (i == 0) sequence.push_back(0);
        if ((i == 1) || (i == 2)) sequence.push_back(1);
        if (i > 2) sequence.push_back(sequence[i - 1] + sequence[i - 2]);
    }
    return sequence;
}