#include <iostream>
#include <Eigen/Dense>

int main( int argc, char **argv )
{
    Eigen::Vector4d c(5.0, 6.0, 7.0, 8.0);
    std::cout<< "c=\n" << c << std::endl;

    return 0;
}
