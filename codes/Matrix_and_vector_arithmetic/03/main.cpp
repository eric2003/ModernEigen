#include <iostream>
#include <Eigen/Dense>


int main( int argc, char **argv )
{
    Eigen::MatrixXcf a = Eigen::MatrixXcf::Random(2,2);
    std::cout << "Here is the matrix a\n" << a << std::endl;

    std::cout << "Here is the matrix a^T\n" << a.transpose() << std::endl;


    std::cout << "Here is the conjugate of a\n" << a.conjugate() << std::endl;


    std::cout << "Here is the matrix a^*\n" << a.adjoint() << std::endl;

    return 0;
}
