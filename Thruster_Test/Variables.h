#pragma once

ref struct Globals
{
	static System::String ^message;
	static System::String ^outgoingMessage;

	static bool messageFlag = 0;
	static bool Connection = 0;
	static bool Callibration = 0;
};

class DataVals
{
public:
	int mins, secs, milis, tenso, shunt, rpm, press1, press2;
	float timeInSecs;
	float temp1, temp2, vibro[10];
	float volt;
	float diffTime;

	DataVals(int = 0, int = 0, int = 0, int = 0, int = 0, int = 0, int = 0, int = 0, float = 0, float = 0, float = 0, float = 0, float = 0, float = 0, float = 0,
		float = 0, float = 0, float = 0, float = 0, float = 0, float = 0, float = 0, float = 0)
	{

	}
};
class ModeVals
{
public:
	int mode, duty, valOne, valTwo, stay_time;

	ModeVals(int = 0, int = 0, int = 0, int = 0, int = 0)
	{

	}
};
