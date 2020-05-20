#include <iostream>
#include <complex>
using namespace std;


namespace solver{



class RealVariable{
    public:
    double a;
    double c;
    double b;

    RealVariable(){
        a = 0;
        b = 1;
        c = 0;
    }

    RealVariable(double a,double b,double c){
        this->a=a;
        this->b=b;
        this->c=c;

    }
};

class ComplexVariable{
    public:
    complex<double> a;
    complex<double> b;
    complex<double> c;
   // ComplexVariable(double re,double im):c(re,im){}  
    //ComplexVariable():c(0.0,0.0){}
    ComplexVariable():
       a (0,0) ,
       b(1,0) ,
       c(0,0) 
          {}
    
    ComplexVariable(complex<double> a1,complex<double> b1,complex<double> c1):
       a (a1),
        b (b1),
        c (c1)
    {}  
};


     const complex<double> solve(ComplexVariable c);
     double solve(RealVariable r);




RealVariable operator==(const RealVariable& x ,const double& other);
RealVariable operator==(const RealVariable& x ,const RealVariable& other);
RealVariable operator*( const double& other,const RealVariable& x );
RealVariable operator*(const RealVariable& x ,const double& other);
 RealVariable operator-(const RealVariable& x ,const RealVariable& other);  
  RealVariable operator-(const RealVariable& x ,const double& other);  

 RealVariable operator^( const RealVariable& x ,const double other);
  RealVariable operator^(RealVariable R,RealVariable other) ;
RealVariable operator+(const double other,const RealVariable& x );

 RealVariable operator+(const RealVariable& x ,const RealVariable& other); 
  RealVariable operator+(const RealVariable& x ,const double& other); 

 RealVariable operator/(const RealVariable& x ,const double& other);  


ComplexVariable operator==(const ComplexVariable& x ,double other);
 ComplexVariable operator==(const ComplexVariable& x ,const ComplexVariable&  other);
 ComplexVariable operator*(double other,const ComplexVariable& x) ;
 ComplexVariable operator*(const ComplexVariable& x,double other) ;
 ComplexVariable operator-(const ComplexVariable& x,const ComplexVariable&  other) ;
ComplexVariable operator-(complex<double> other,const ComplexVariable& x);
ComplexVariable operator-(const ComplexVariable& x ,complex<double> other);

 ComplexVariable operator^(const ComplexVariable& x,double other) ;
ComplexVariable operator+(const ComplexVariable& x ,const ComplexVariable&  other);
ComplexVariable operator+(const ComplexVariable& x ,complex<double> other);
ComplexVariable operator+(complex<double> other,const ComplexVariable& x);

ComplexVariable operator+(double t ,const ComplexVariable& x);
ComplexVariable operator+(const ComplexVariable& x,double other);


  ComplexVariable operator/(const ComplexVariable& x ,double other);


}