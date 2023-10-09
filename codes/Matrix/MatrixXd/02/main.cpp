#include <iostream>
#include <Eigen/Dense>

int main( int argc, char **argv )
{
    int m, n;
    std::cin >> m >> n;
    std::cout << "m = " << m << " n= " << n << std::endl;
    Eigen::MatrixXd A(m, n);
    A <<  1, 2, 3,
          4, 5, 6;
    std::cout<< "A=\n" << A << std::endl;

    return 0;
}
