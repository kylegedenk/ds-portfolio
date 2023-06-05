#pragma once

class Cube {
	public:
		double getVolume();
		double getSurfaceArea();
		void setLength(double length);
        double volume;
	
	private:
		double length_;
};
