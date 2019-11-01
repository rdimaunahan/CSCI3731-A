#include <cstdio>
#include <iostream>
#include <utility>
#include "Image.h"

int main(int argc, char** argv){
	Image i1;
	i1.read("test.ppm");
	i1.writePPM("writePPM.ppm");	
	i1.writeJpeg("image.jpeg");
	std::cout<<i1<<std::endl;
	
	Image i2(i1);
	i2.read("test.ppm");
	i2.writePPM("2writePPM.ppm");	
	i2.writeJpeg("2image.jpeg");
	std::cout<<i2<<std::endl;
	Image i3;
	i3 = i1;
	i3.read("test.ppm");
	i3.writePPM("3writePPM.ppm");	
	i3.writeJpeg("3image.jpeg");
	std::cout<<i3<<std::endl;
	Image i4(std::move(i1));
	i4.read("test.ppm");
	i4.writePPM("4writePPM.ppm");	
	i4.writeJpeg("4image.jpeg");
	std::cout<<i4<<std::endl;
	Image i5;
	i5 = std::move(i2);
	i5.read("test.ppm");
	i5.writePPM("5writePPM.ppm");	
	i5.writeJpeg("5image.jpeg");
	std::cout<<i4<<std::endl;
}