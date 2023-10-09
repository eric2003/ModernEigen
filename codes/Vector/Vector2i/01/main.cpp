#include <iostream>
#include <Eigen/Dense>

int main( int argc, char **argv )
{
    Eigen::Vector2i a(1, 2);                      // A column vector containing the elements {1, 2}
    std::cout<< "a=\n" << a << std::endl;

    return 0;
}
