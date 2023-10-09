#include <iostream>
#include <Eigen/Dense>

int main( int argc, char **argv )
{
    Eigen::Matrix<int, 5, 1> b {1, 2, 3, 4, 5};   // A row-vector containing the elements {1, 2, 3, 4, 5}
    Eigen::Matrix<int, 1, 5> c = {1, 2, 3, 4, 5}; // A column vector containing the elements {1, 2, 3, 4, 5}
    std::cout<< "b=\n" << b << std::endl;
    std::cout<< "c=\n" << c << std::endl;

    return 0;
}
