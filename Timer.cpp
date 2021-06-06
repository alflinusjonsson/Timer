#include "Timer.h"

Timer::Timer() {
	start_ = std::chrono::high_resolution_clock::now();
}

Timer::~Timer() {
	end_ = std::chrono::high_resolution_clock::now();
	duration_ = end_ - start_;

	float ms = duration_.count() * 1000.0f;
	std::cout << "Timer took: " << ms << "ms " << std::endl;
}
