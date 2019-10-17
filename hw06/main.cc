#include <cstdio>
#include <iostream>
#include "Angle.h"

int main(int argc , char** argv){
	//checking binary operations
	Angle a1(360);
	Angle a2(150);
	std::cout<<"A1 is "<<a1<<std::endl;
	std::cout<<"A2 is "<<a2<<std::endl;
	Angle sum = a1 + a2;
	std::cout<<"+: Sum is "<<sum<<std::endl;
	Angle diff = a1 - a2;
	std::cout<<"-: Diff is "<<diff<<std::endl;
	Angle mul = a1 * 2.0;
	std::cout<<"*: A1 times two "<<mul<<std::endl;
	Angle div = a1 / 2.0;
	std::cout<<"/: A2 divided two "<<div<<std::endl;
	
	//checking +=,-=,*=,/=
	Angle a3(300);
	Angle a4(300);
	std::cout<<"A3 is "<<a3<<std::endl;
	std::cout<<"A4 is "<<a4<<std::endl;
	a3 += a4;
	std::cout<<"+=: A3 is now "<<a3<<std::endl;
	a3 -= a4;
	std::cout<<"-=: A3 is now "<<a3<<std::endl;
	a3 *= 2.0;
	std::cout<<"*=: A3 is now "<<a3<<std::endl;
	a3 /= 2.0;
	std::cout<<"/=: A3 is now "<<a3<<std::endl;
	
	//checking comparison
	if(a3==a4){
		std::cout<<"A3 and A3 is the same"<<std::endl;
	}else{
		std::cout<<"A3 and A4 is not the same"<<std::endl;
	}
	
	//checking =
	a3 = a4;
	std::cout<<"=: A3 is now A4 "<<a3<<std::endl;
}