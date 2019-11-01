#ifndef IMAGE_H
#define IMAGE_H
#include <cstdio>
#include <iostream>

class Image{
	private:
		int width;
		int length;
		unsigned char* pixel;
	public:
		Image();
		Image(const Image& img);
		virtual ~Image();
		Image& operator=(const Image& img);
		Image(Image&& i);
		Image& operator=(Image&& i);
		
		int getWidth() const;
		int getLength() const;
		unsigned char* getPixel() const;
		
		void set(int width, int length, unsigned char* pixel);
		void writePPM(const char* filename);
		int writeJpeg(const char* filename);
		void read(const char* filename);
		
		friend std::ostream& operator <<(std::ostream& out, const Image& image);
		
};

#endif