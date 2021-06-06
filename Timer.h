#include <iostream>
#include <chrono>
#include <thread>
#pragma once

class Timer
{
public:
	Timer();
	~Timer();

private:
	std::chrono::time_point<std::chrono::steady_clock> start_, end_;
	std::chrono::duration<float> duration_;
};

