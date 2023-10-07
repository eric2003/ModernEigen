#include <iostream>
#include <Eigen/Dense>

int main( int argc, char **argv )
{
    // Declare and initialize matrices  
    Eigen::MatrixXi A(2, 3);
    A <<  1, 1, 1,
        0, 1, 0;
    std::cout<< "A=\n" << A << std::endl;

    Eigen::MatrixXi B(3, 2);
    B << 2, 0,
        3, 0,
        1, 2;
    std::cout<< "B=\n" << B << std::endl;

    Eigen::MatrixXi C = A + B.transpose();

    std::cout<< "C=\n" << C << std::endl;

    return 0;
}
