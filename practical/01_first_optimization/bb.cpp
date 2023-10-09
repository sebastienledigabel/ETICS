#include <cmath>
#include <iostream>
#include <fstream>
#include <cstdlib>

int main ( int argc , char ** argv ) {

  double f = 1e20;
  double x, y;

  if ( argc >= 2 ) {
    std::ifstream in ( argv[1] );
    in >> x >> y;
    if ( in.fail() ) {
      f = 1E20;
      return 1;
    }
    else
      f = pow(1-x,2.0)+100.0*pow(y-x*x,2.0);
    in.close();
  }
  std::cout << f << std::endl;
  return 0;
}
