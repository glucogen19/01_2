#include <cstdio>
#include <iostream>

class Road {
    public:
   	 double Length;
   	 int Width;
	void data(double l, int w) {
	Length = l;
	Width = w;
	} 
};

int main() {
    Road road;
	double rl;
	int wl;
	std::cin >> rl >> wl;
    road.data(rl,wl);
    std::cout << "Length:" << road.Length << std::endl;
    std::cout << "Width:" << road.Width << std::endl;
	
    return 0;
}
