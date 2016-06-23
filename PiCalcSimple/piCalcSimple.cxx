#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

double getRand(){

  return double(rand())/double(RAND_MAX);
}

int main(int argc, char *argv[]){

  // area_square=side*side
  // area_circle=pi*(side/2)^2
  //

  // (area_square-area_circle)/area_circle = 
  //      = s^2- pi*s^2*(1/4) / pi*s^2*(1/4)
  //
  //  out/in         = 4/pi - 1
  //  (out/in + 1)/4 = 1/pi 
  //  pi = 4/(out/in + 1)

  /* initialize random seed: */
  srand (time(NULL));


  unsigned in  = 0;
  unsigned out = 0;

  for(unsigned i=0; i<1e8; i++){

    double x    = getRand()-0.5;
    double y    = getRand()-0.5;
    double dist = sqrt(pow(x,2)+pow(y,2));
    
    //cout << "x=" << x << " y=" << y << " d=" << dist << endl;

    if(dist>0.5){out++;}
    else        {in++;}

  }
  
  cout <<setprecision(30) << "pi=" << 4/(1+(double(out)/double(in))) << endl;

  return 0;
}
