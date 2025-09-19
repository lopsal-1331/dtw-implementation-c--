#pragma once 
#include <vector>

namespace dtw {
    class DTW {
        public: 
            // calculate distance between two time series
            static double distance(
                const std::vector<double>& seq1, 
                const std::vector<double>& seq2
            );

            // returns cost matrix
            static std::vector<std::vector<double>> costMatrix(
                const std::vector<double>& seq1,
                const std::vector<double>& seq2
            );
    };
}