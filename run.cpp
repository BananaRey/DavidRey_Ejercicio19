#include <iostream>
#include <cstdlib>

using namespace std;

double f(double x, double y);


int main(){
 
 double k1;
 double k2;
 double k3;
 double k4;
 
 double y=1;
 double x=0;
 double h=0.1;
 double N=10/h;
 

 for(int i=0;i<N;i++){

  k1=f(x,y);
  k2=f(x+(h/2),y+(h/2)*k1);
  k3=f(x+(h/2),y+(h/2)*k2);
  k4=f(x+h,y+h*k3);
  

  y=y+(h/6)*(k1+2*k2+2*k3+k4);
  x=x+h;
  cout<<x<<" "<<y<<endl;
  
 }
return(0);
}



double f(double x, double y){
return(-y);
}


