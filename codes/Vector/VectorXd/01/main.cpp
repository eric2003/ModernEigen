#include <iostream>
#include <Eigen/Dense>

int main( int argc, char **argv )
{
    Eigen::VectorXd a {{1.5, 2.5, 3.5}};             // A column-vector with 3 coefficients
    Eigen::RowVectorXd b {{1.0, 2.0, 3.0, 4.0}};     // A row-vector with 4 coefficients
    std::cout<< "a=\n" << a << std::endl;
    std::cout<< "b=\n" << b << std::endl;

    return 0;
}
