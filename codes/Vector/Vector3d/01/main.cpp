#include <iostream>
#include <Eigen/Dense>

int main( int argc, char **argv )
{
    Eigen::Vector3d b(5.0, 6.0, 7.0);
    std::cout<< "b=\n" << b << std::endl;

    return 0;
}
