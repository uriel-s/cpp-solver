#include <iostream>
#include <complex>
#include "solver.hpp"
using namespace std;
using namespace solver;

 const complex<double> solver::solve(ComplexVariable com){
     complex<double> ans;
     complex<double> a=com.a;
     complex<double> b= com.b;
     complex<double> c= com.c;
     
        if (a.real() ==0){  
          if (b.real() !=0) return -c/b;
          else  throw invalid_argument("There is no  solution"); 
      }
           
        ans = (-b + sqrt(pow(b,2)-(4.0*a*c)))/(2.0*a);
        //  cout << "this id ans " << ans << endl;
        return ans; 
     
 }
     double solver::solve(RealVariable r){
         
         double ans = -1000000;
         double a= r.a;   
         double b = r.b;
         double c = r.c;
        //  cout << "this is a" << a << endl;
        //   cout << "this is b" << b << endl;
        //  cout << "this is c" << c << endl;

        if (a!=0){
         
         ans = (-b + sqrt(pow(b,2)-(4*a*c)))/(2*a);
        //  cout << "this id ans " << ans << endl;
         if(isnan(ans) == true) {
           ans = (-b - sqrt(pow(b,2)-(4*a*c)))/(2*a);
             if(isnan(ans) == true){
           throw invalid_argument("There is no real solution"); 
             }else{ return ans;}
         
         } else {
        return ans;
         }
        } 
         if(b!=0){
            return -c/b;

        }
        throw invalid_argument("iligle polynom"); 
     }
  
RealVariable solver::operator==(const RealVariable& x ,const RealVariable& other){  
     RealVariable r{ x.a -other.a, x.b-other.b, x.c-other.c};
     return r;
}


RealVariable solver::operator==(const RealVariable& x ,const double& other){  
     RealVariable r{ x.a , x.b, x.c-other};
     return r;
}
RealVariable solver::operator*(const RealVariable& x ,const double& other){  
     RealVariable r{ x.a *other, x.b*other, x.c*other};
     return r;
}

RealVariable solver::operator*( const double& other,const RealVariable& x ){  
     RealVariable r{ x.a *other, x.b*other, x.c*other};
     return r;
}

 RealVariable solver::operator+(const RealVariable& x ,const RealVariable& other){  
     RealVariable r{ x.a + other.a,x.b+ other.b, x.c+ other.c};
     return r;
}
 RealVariable solver::operator+(const RealVariable& x ,const double& other){  
     RealVariable r{ x.a,x.b, x.c+ other};
     return r;
}

RealVariable solver::operator+(const double other,const RealVariable& x ){  
     RealVariable r{ x.a,x.b, x.c+ other};
     return r;
}
 RealVariable solver::operator-(const RealVariable& x ,const RealVariable& other){  
     RealVariable r{ x.a - other.a,x.b - other.b, x.c - other.c};
     return r;
}
RealVariable solver::operator-(const RealVariable& x ,const double& other){  
     RealVariable r{ x.a ,x.b , x.c -other};
     return r;
}

 RealVariable solver::operator/(const RealVariable& x ,const double& other){  
    if (other ==0) throw invalid_argument("cant divaide by zero"); 
     RealVariable r{ x.a/other,x.b/other,x.c/other};
     return r;
}
 RealVariable solver::operator^( const RealVariable& x ,const double other){  
     RealVariable r{ x.b,0,0 };
     return r;
}
//RealVariable solver::operator/(RealVariable x ,RealVariable other){  return 0;}

ComplexVariable c;

ComplexVariable solver::operator+(const ComplexVariable& x ,const ComplexVariable&  other){
   ComplexVariable com {x.a+other.a, x.b+other.b, x.c+other.c};
    return com;
    }

ComplexVariable solver::operator+(const ComplexVariable& x ,complex<double> other){
   ComplexVariable com {x.a, x.b, x.c+other};
    return com;
    }

    ComplexVariable solver::operator+(complex<double> other,const ComplexVariable& x){
     ComplexVariable com {x.a, x.b, x.c+other};
    return com;
    }
    ComplexVariable solver::operator+(double other,const ComplexVariable& x){
    ComplexVariable com {x.a, x.b, x.c+other};
    return com;
    }    
ComplexVariable solver::operator+(const ComplexVariable& x,double other){
    ComplexVariable com {x.a, x.b, x.c+other};
    return com;
    }    

ComplexVariable solver::operator-(const ComplexVariable& x,const ComplexVariable& other){
   ComplexVariable com {x.a-other.a, x.b-other.b, x.c-other.c};
    return com;
    }

ComplexVariable solver::operator-(const ComplexVariable& x ,complex<double> other){
   ComplexVariable com {x.a, x.b, x.c-other};
    return com;
    }

    ComplexVariable solver::operator-(complex<double> other,const ComplexVariable& x){
     ComplexVariable com {x.a, x.b, x.c-other};
    return com;
    }

ComplexVariable solver::operator*(double other,const ComplexVariable& x) {
     ComplexVariable com {x.a*other, x.b*other , x.c*other};
        return com;
}
 ComplexVariable solver::operator*(const ComplexVariable& x,double other) { 
     ComplexVariable com {x.a*other, x.b*other , x.c*other};
        return com;
        }


ComplexVariable solver::operator==(const ComplexVariable& x ,double other){  
         ComplexVariable com{ x.a ,x.b , x.c - other};
    return com;}


ComplexVariable solver::operator==(const ComplexVariable& x ,const ComplexVariable& other){  
     ComplexVariable com{ x.a - other.a,x.b - other.b, x.c - other.c};
     return com;
} 
 ComplexVariable solver::operator^(const ComplexVariable& x,double other) {
               if (other ==0) throw invalid_argument("iligal power"); 
 
     
       ComplexVariable com {x.b,0,0 };
        return com;
 }


  ComplexVariable solver::operator/(const ComplexVariable& x ,double other){
      ComplexVariable com {x.a/other, x.b/other , x.c/other};
        return com;
  }

