#include <iostream>
#include <cstdlib>

using namespace std;

double f(double x, double y);
double f2(double x, double y, double z);


int main(){
 
 double k1;
 double k2;
 double k3;
 double k4;

 double k5;
 double k6;
 double k7;
 double k8;
 
 double z=1;
 double y_old=0;
 double y_new;
 double x=0;
 double h=0.1;
 double N=10/h; 

for(int i=0;i<N;i++){
  k1=f2(x,y_old,z);
  k2=f2(x+(h/2),y_old+(h/2)*k1,z);
  k3=f2(x+(h/2),y_old+(h/2)*k2,z);
  k4=f2(x+h,y_old+h*k3,z);  

  y_new=y_old+(h/6)*(k1+2*k2+2*k3+k4);
  
  k5=f(x,y_old);
  k6=f(x+(h/2),y_old+(h/2)*k1);
  k7=f(x+(h/2),y_old+(h/2)*k2);
  k8=f(x+h,y_old+h*k3);  


  z=z+(h/6)*(k5+2*k6+2*k7+k8);
  x=x+h;
  cout<<x<<" "<<y_new<<endl;
  y_old=y_new;
   
  }
return(0);
}

double f(double x, double y){
return(-y);
}

double f2(double x, double y, double z){
return(z);
}




