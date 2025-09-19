#include "include/dtw/DTW.hpp"
#include <cmath>
#include <limits>
#include <iostream>

namespace dtw {

double DTW::distance(
    const std::vector<double>& seq1, 
    const std::vector<double>& seq2
) {
    // save the size of each vector of measurements
    int size1 = seq1.size(); 
    int size2 = seq2.size(); 

    // initialize matrix with 0 in all positions, covering first
    // position of matrix (0,0) with its final value.
    std::vector<std::vector<double>> costMatrix(size1, std::vector<double>(size2, 0.0)); 

    // first row - we start in second position since (0,0) - first element
    // of row has the value 0.0
    for (int i = 1; i < size2; i++) {

    }
}

}