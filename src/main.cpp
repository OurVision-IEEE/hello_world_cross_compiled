#include "../include/tezz_printer.hpp"

int main() {
	cv::Mat image = cv::imread("image.jpeg");
	if(image.empty()) {
		std::cout << "Image not found!" << std::endl;
	} else {
		std::cout << "Image found!" << std::endl;
	}
	return 0;
}
