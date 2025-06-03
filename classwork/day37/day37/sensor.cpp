#include<iostream>
#include<array>
using namespace std;
class sensor {
	//static const int sensors=3;
	//static const int readings=5;
	//array<array<float, readings>, sensors>read;
	//array<float, sensors>calibration = { 0.5f,-0.3f,1.2f };
	array<array<float,5>, 3>read;
	array<float, 3>calibration = { 0.5,-0.3,1.2 };

public:
	sensor()
	{
		read = { {
		{23.7,56.8,89.7,45.4,22.3},
		{ 23.7,56.8,89.7,45.4,22.3 },
		{ 23.7,56.8,89.7,45.4,22.3 },
		} };
	}
		void avg()
		{
			for (size_t i = 0;i < read.size();++i)
			{
				float sum = 0.0;
				for (float value : read[i])
				{
					value += calibration[i];
					sum += value;
				}
				float avrg = sum / read[i].size();
				cout << "sensor" << i + 1<<"avarage " << avrg << endl;
			}
		}
};
