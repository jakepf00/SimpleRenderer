#include <iostream>

int main() {
	// Image
	int imageWidth = 256;
	int imageHeight = 256;

	// Renderer
	std::cout << "P3\n" << imageWidth << ' ' << imageHeight << "\n255\n";

	for (int i = 0; i < imageHeight; i++) {
		for (int j = 0; j < imageWidth; j++) {
			auto r = double(j) / (imageWidth-1);
			auto g = double(i) / (imageHeight-1);
			auto b = 0.0;

			int ir = int(255.999 * r);
			int ig = int(255.999 * g);
			int ib = int(255.999 * b);

			std::cout << ir << ' ' << ig << ' ' << ib << '\n';
		}
	}
}
