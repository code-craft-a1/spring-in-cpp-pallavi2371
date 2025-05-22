#include <vector>
#include <cmath>

struct Stats{
	float average;
	float min;
	float max;
};
namespace Statistics {
    // define the Stats structure here. See the tests to infer its properties
    // Computes average, min and max of a vector of floats
    Stats ComputeStatistics(const std::vector<float>& numbers);
}