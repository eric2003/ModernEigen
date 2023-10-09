#include <iostream>
#include <Eigen/Dense>

int main( int argc, char **argv )
{
    Eigen::MatrixXf a(2,2);
    std::cout << "a is of size " << a.rows() << "x" << a.cols() << std::endl;
    Eigen::MatrixXf b(3,3);
    a = b;
    std::cout << "a is now of size " << a.rows() << "x" << a.cols() << std::endl;

    return 0;
}
