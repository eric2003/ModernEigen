#include <iostream>
#include <Eigen/Dense>

int main( int argc, char **argv )
{
    Eigen::MatrixXd A(2, 3);
    A <<  1, 2, 3,
          4, 5, 6;
    std::cout<< "A=\n" << A << std::endl;

    return 0;
}
