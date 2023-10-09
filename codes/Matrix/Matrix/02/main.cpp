#include <iostream>
#include <Eigen/Dense>

int main( int argc, char **argv )
{
    Eigen::MatrixXi a {      // construct a 2x2 matrix
        {1, 2},     // first row
        {3, 4}      // second row
    };
    Eigen::Matrix<double, 2, 3> b {
        {2, 3, 4},
        {5, 6, 7},
    };
    std::cout<< "a=\n" << a << std::endl;
    std::cout<< "b=\n" << b << std::endl;

    return 0;
}
