 #include "doctest.h"
 #include "solver.hpp"
 #define EPS 0.00001

 using namespace solver;


     RealVariable x;
     

   TEST_CASE("test real numbers Operator *"){
 CHECK(solve(4*x+10 == 5*x) == 10);
 CHECK(solve(2*x-4 == 10) == 7);
 CHECK(solve(-4+2*x == 10) == 7);
CHECK(solve(2*x == 3) == 1.5);
 CHECK(solve(2*x+2 == 18) == 8);
CHECK(solve(3*x+2+6 == 20) == 4);
CHECK(solve(4*x == 20) == 5);
CHECK(solve(5*x == 20) == 4);
CHECK(solve(6*x -7 == 29) == 6);
   }
   
   
   
   
   
   TEST_CASE("test real numbers Operator +"){
  CHECK(solve(3*x+2+6 == 20) == 4);
 CHECK(solve(-4+2*x == 10) == 7);
 CHECK_THROWS(solve(x+3 == x));
CHECK_THROWS(solve(x+4 == x));

   }

   TEST_CASE("test real numbers Operator -"){
   CHECK(solve(x-4 == 8)==12);
    CHECK(solve(x-2 == 8)==10);
  CHECK(solve(x-10 == 0)==10);
  CHECK(solve(x-20 == 0)==20);

   }


   TEST_CASE("test real numbers Operator *"){
 CHECK(solve(4*x+10 == 5*x) == 10);
 CHECK(solve(2*x-4 == 10) == 7);
 CHECK(solve(-4+2*x == 10) == 7);
CHECK(solve(2*x == 3) == 1.5);
 CHECK(solve(2*x+2 == 18) == 8);
CHECK(solve(3*x+2+6 == 20) == 4);
CHECK(solve(4*x == 20) == 5);
CHECK(solve(5*x == 20) == 4);
CHECK(solve(6*x -7 == 29) == 6);
   }


   TEST_CASE("test real numbers Operator /"){
	  CHECK(solve(2 * x / 2 == 29) == 29);
         CHECK(solve(2*x/4 == 1) ==2);
         CHECK(solve(x/3+5 == 0) == -9);
     CHECK(solve(2 * x / 2 == 29) == 29);
         CHECK(solve(2*x/4 == 1) ==2);
         CHECK(solve(x/3+5 == 0) == -9);
   
   
   }

   TEST_CASE("test real numbers trows"){
   CHECK_THROWS(solve((x^3) == -1)); 
    CHECK_THROWS(solve((x^2) == -2));
    CHECK_THROWS(solve((x^2) == -3));
    CHECK_THROWS(solve((x^3) == -4)); 
    CHECK_THROWS(solve(x+1 == x)); // no solutions
    CHECK_THROWS(solve(2*x+2 == 2*x));
    CHECK_THROWS(solve(x+3 == x));
    CHECK_THROWS(solve(x+4 == x));
     CHECK_THROWS(solve(x+10 == x));
    CHECK_THROWS(solve(x+13 == x));
    CHECK_THROWS(solve(x+15 == x));
    CHECK_THROWS(solve(x+17 == x));
    CHECK_THROWS(solve(x+18 == x));
   }




    TEST_CASE("test real numbers Operator ^"){
    CHECK((solve((x ^ 2) + 2 == 18) == 4 || solve((x ^ 2) + 2 == 18)== -4));
    CHECK((abs(solve((x ^ 2) == 16.0) - 4) < EPS || abs(solve((x ^ 2) == 16.0) + 4) < EPS));
    CHECK((abs(solve((x ^ 2) == 9.0) - 3) < EPS || abs(solve((x ^ 2) == 9.0) + 3) < EPS));
    CHECK(abs(solve(x / 9 + 8 == 13) - 45) < EPS);
    CHECK((abs(solve((x ^ 2) == 81) - 9) < EPS || abs(solve((x ^ 2) == 81) + 9) < EPS));
    CHECK((abs(solve(12 * (x ^ 2) - 12 == 0) - 1) < EPS || abs(solve(12 * (x ^ 2) - 12 == 0) + 1) < EPS)); }
    CHECK((abs(solve((x ^ 2) == 2) - 1.41421) < EPS || abs(solve((x ^ 2) == 2) 1.41421) < EPS));
    CHECK((abs(solve((x ^ 2) == 3) - 1.73205) < EPS || abs(solve((x ^ 2) == 3) + 1.73205) < EPS));
    CHECK((abs(solve((x ^ 2) == 5) - 2.23607) < EPS || abs(solve((x ^ 2) == 5) +2.23607) < EPS));



   TEST_CASE("test complex numbers Operator +  -"){
    ComplexVariable y;
    CHECK(solve(y+5i == 2*y+3i) == 0.0+2i);
    CHECK(solve(y+4i == 2*y+3i) == 0.0+1i);
    CHECK(solve(y+33i == 2*y+3i) == 0.0+30i);
    CHECK(solve(y+1i == 2*y+3i) == 0.0-2i);
    CHECK(solve(y+5i == 2*y+3i) == 0.0+2i);
    CHECK(solve(y+6i == 2*y+3i) == 0.0+3i);
    CHECK(solve(y+5i == 2*y+3i) == 0.0+2i);
    CHECK(solve(y+2i == 2*y+3i) == 0.0-1i);
    CHECK(solve(y+5i == 2*y+3i) == 0.0+2i);
    CHECK(solve(y+6i == 2*y+3i) == 0.0+3i);
    CHECK(solve(y+5i == 2*y+3i) == 0.0+2i);
    CHECK(solve(y+4i == 2*y+3i) == 0.0+1i);
    CHECK(solve(y+6i == 2*y+3i) == 0.0+3i);
    CHECK(solve(y+5i == 2*y+3i) == 0.0+2i);
    CHECK(solve(y+2i == 2*y+3i) == 0.0-1i);
    CHECK(solve(y+5i == 2*y+3i) == 0.0+2i);
    CHECK(solve(y+5i == 2*y+3i) == 0.0+2i);
    CHECK(solve(y+4i == 2*y+3i) == 0.0+1i);
    CHECK(solve(y+33i == 2*y+3i) == 0.0+30i);
    CHECK(solve(y+1i == 2*y+3i) == 0.0-2i);
    CHECK(solve(y+5i == 2*y+3i) == 0.0+2i);
    CHECK(solve(y+6i == 2*y+3i) == 0.0+3i);
    CHECK(solve(y+5i == 2*y+3i) == 0.0+2i);
}



   TEST_CASE("test complex numbers Operator *"){

	ComplexVariable y;

	CHECK(solve(2 * y + 5i == 23) == complex<double>(11.5, -2.5));
	CHECK(solve(y + 5i == 2 * y + 3i) == complex<double>(0.0, 2.0));
	CHECK(solve(2 * y + 5i == 23) == complex<double>(11.5, -2.5));
	CHECK(solve(4 * y + 3i == 6) == complex<double>(1.5, -0.75));
	CHECK(solve(4 * y + 3i == 6 * y + 7) == complex<double>(-3.5, 1.5));
	CHECK(solve(4*y + 3i == 6*y + 94) == complex<double>(-47,1.5));
   }

   TEST_CASE("test complex numbers Operator ^"){
	ComplexVariable y;

    CHECK((solve((y ^ 2) == 16) == complex<double>(4.0, 0.0) || solve((y ^ 2) == 16) == complex<double>(-4.0, 0.0)));
    CHECK((solve((y ^ 2) == -16) == complex<double>(0.0, 4.0) || solve((y ^ 2) == -16) == complex<double>(0.0, -4.0)));
    CHECK((solve((y ^ 2) - 5 == 11) == complex<double>(4.0, 0.0) || solve((y ^ 2) - 5 == 11) == complex<double>(-4.0, 0.0)));
    CHECK((solve((y ^ 2) - 5 == 20) == complex<double>(5.0, 0.0) || solve((y ^ 2) - 5 == 20) == complex<double>(-5.0, 0.0)));
      CHECK_THROWS(solve(y / 0));

   }

  // TEST_CASE("test complex trowhs"){
 // ComplexVariable y;
  //CHECK_THROWS(solve(y / 0));
    
   //}









//     CHECK(solve(x^2 == 4) == (2 || -2) );
//     CHECK(solve(x^2 == 9) == (3 || -3 ));
//     CHECK(solve(x^2 == 16) == (4 || -4));
//     CHECK(solve(x^2 +2 == 6) == (2 || -2));
//     CHECK(solve(x^2 -2== 7) == (3 || -3));
//        double test1=(solve(x^2==3));
//        	CHECK (  abs( test1 -1.73205) < 0.0001 );
//            //   abs(test1+1.73205 ) < 0.0001  ) ;//

//     }
// TEST_CASE("test real numbers Operator *"){
//      CHECK(solve(2*(x^2) == 9) == (3 || -3));
//       CHECK(solve(4*x+10 == 5*x) == 10);
//        CHECK(solve(2*x-4 == 10) == 7);
//        CHECK(solve(-4+2*x == 10) == 7);
//         CHECK(solve(2*x == 3) == 1.5);
//         CHECK(solve((2*x)^1-4 == 10) == 7);
// }
     
//      TEST_CASE("test real numbers Operator / "){
//         CHECK(solve(2*x/4 == 1) ==2);
//         CHECK(solve(x/3+5 == 0) == -9);
// CHECK_THROWS(2/x==0);

// }

// TEST_CASE("test real numbers Operator -"){
//     	CHECK(solve (x-1==2.5)==3.5);
// 	CHECK (solve(1-x==2.5)==1.5);
// 	CHECK (solve(2.5==1-x)==1.5);
//     }
// //	CHECK ( solve( x^2 -x-1==5)==(3 || -2) );
// // }

// // TEST_CASE("Second-degree equations"){
// // 	CHECK (solve(x^2-x-1==5)==(3 || -2) );
// // 	CHECK (solve(x^2+x+1==3)==(1 || -2) );
// // 	CHECK (solve(x^2-2*x-1==2)==-1||3  );
// //    CHECK_THROWS(x^2+x+1==0);

// // }

// TEST_CASE("test real numbers"){
// 	//CHECK (solve(x^2+2*x-1==3) ==   // ( -1||2 ) );
// 	CHECK ( abs (solve(x^2==3)-1.73205) < 0.0001  ||  abs(solve(x^2==6)+1.73205 ) < 0.0001   );
//     CHECK ( abs(solve (x^2==5)-2.23607 )<  0.0001 ||   abs(solve (x^2==5)-2.23607 )<  0.0001        );
// 	CHECK ( abs(solve(x^2==5)-2.23607 ) < 0.0001  ||    abs(solve(x^2==5)+2.23607 ) < 0.0001)    ;//
// 	CHECK (abs(solve(x^2==6)-2.44949 ) < 0.0001  ||   abs(solve(x^2==6)+2.44949 ) < 0.0001);//
// 	CHECK (abs(solve(x^2==7)-2.64575 ) < 0.0001 ||   abs(solve(x^2==7)+2.64575 ) < 0.0001);//

// }
// TEST_CASE("trhows  "){
// CHECK_THROWS (solve(x^2+x+1==0));
// CHECK_THROWS(solve(x^2+x+1==0));
// CHECK_THROWS(solve(2/x==0));

// }



// // TEST_CASE("test complex numbers Operator +"){
// //     CHECK(c+1 ==(2,1));
// //     CHECK(1+c ==(2,1));
// // 	CHECK (c+i == (1,2));
// // 	CHECK (c+c == (2,2));
  
// // }

// // TEST_CASE("test complex numbers Operator -"){
// //     CHECK(c2-1 ==(1,2));
// //     CHECK(1-c2 ==(-1,-2));
// // 	CHECK (c2-i == (2,1));
// // 	CHECK (2*c-c == (1,1) );

// // }

// // TEST_CASE("test complex numbers Operator *"){
// //     ComplexVariable x (1,1) ;
// //       ComplexVariable y (2,2) ;
// //     CHECK(x*2== (2,2));
// //     CHECK(2*x== (2,2));
// //     CHECK(2.3*x== (2.3,2.3));
  
// // }
// // TEST_CASE("test complex numbers Operator ^"){
// //     ComplexVariable x (1,1) ;
// //   ComplexVariable y (2,2) ;
// //     CHECK(x^2== (0,2));
// //     CHECK(x^2== (0,8));

// // }
// // TEST_CASE("test complex numbers Operator /"){
// //     ComplexVariable x (1,1) ;
// //       ComplexVariable y (2,2) ;
// //     CHECK (y/2== (1,1));
// //     CHECK(x/2== (0.5,0.5));
// //     CHECK(x/0.5== (2,2));

// // }

// // TEST_CASE("complex Second-degree equations"){
// //     ComplexVariable x (1,1);

// //     CHECK(x^2+2*x +1 == (2,2));


// // }
// // TEST_CASE("test real numbers"){
// //     RealVariable x;
// //     CHECK(solve(x^2 == 4) == (2 || -2) );
// //     CHECK(solve(x^2 == 9) == (3 || -3 ));
// //     CHECK(solve(x^2 == 16) == (4 || -4));
// //     CHECK(solve(x^2 +2 == 6) == (2 || -2));
// //     CHECK(solve(x^2 -2== 7) == (3 || -3));


// //     CHECK(solve(4==x^2 ) == (2 || -2));
// //     CHECK(solve(9==x^2 ) == (3 || -3));
// //     CHECK(solve(  16==x^2 ) == (4 || -4));
// //     CHECK(solve(6==x^2 +2 ) == (2 || -2));
// //     CHECK(solve(7==x^2 -2) == (3 || -3));

// //     CHECK(solve(2*(x^2) == 9) == (3 || -3));
// //      CHECK(solve(9==2*(x^2) ) == (3 || -3));

// //      CHECK(solve(4*x+10 == 5*x) == 10);
// //      CHECK(solve(2*x-4 == 10) == 7);
// //      CHECK(solve(2*x-4 == 10) == 7);
// //      CHECK(solve(-4+2*x == 10) == 7);
// //         CHECK(solve(2*x == 3) == 1.5);
// //         CHECK(solve((2*x)^1-4 == 10) == 7);
// //         CHECK(solve((2*x)^0 == 1) != 0);
// //         CHECK(solve((2*x)/2 == 10) == 10);
// //         CHECK(solve(2*x-4 == 10) == 7);
// //         CHECK(solve(2*x-4 == 10) == 7);
// //         CHECK(solve(2*x-4 == 10) == 7);
// //         CHECK_THROWS(solve(x^3+5 == 9));
// //         CHECK_FALSE(solve(4*x+5 == 10) == 5);

   TEST_CASE("test real numbers Operator ^"){


 CHECK(solve(4*x+10 == 5*x) == 10);
       CHECK(solve(2*x-4 == 10) == 7);
       CHECK(solve(-4+2*x == 10) == 7);
        CHECK(solve(2*x == 3) == 1.5);
  //      CHECK(solve((2*x)^1-4 == 10) == 7);
   }
