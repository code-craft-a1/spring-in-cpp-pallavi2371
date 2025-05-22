#include "stats.h"
#include <numeric>  // for std::accumulate
#include <algorithm> // for std::min_element, std::max_element

Stats Statistics::ComputeStatistics(const std::vector<float>& numbers) {
    // For empty input, return NaN for all fields
    Stats stats;
    if (numbers.empty()) {
        stats.average = NAN;
        stats.min = NAN;
        stats.max = NAN;
        return stats;
    }

    //compute average
    stats.average = std::accumulate(numbers.begin(), numbers.end(), 0.0f) / numbers.size();

    //compute min and max
    stats.min = *std::min_element(numbers.begin(), numbers.end());
    stats.max = *std::max_element(numbers.begin(), numbers.end());

    return stats;
}