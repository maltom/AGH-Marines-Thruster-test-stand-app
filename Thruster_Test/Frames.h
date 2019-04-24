#pragma once


#include <string>
#include "Variables.h"
#include <cstdlib>
#include <iostream>
#include <msclr\marshal_cppstd.h>

class Frame;
class LongFrame;
class ShortFrame;
void FrameToData(System::String^ readline, DataVals &data, LongFrame &LF);
System::String^ SendFrame(ModeVals &mode, ShortFrame &SF);


#define LONG_FRAME_LENGTH 17
#define SHORT_FRAME_LENGTH 5
class Frame
{
protected:
	std::string incoming;
	void ReadNConvert(System::String^ inc, std::string out[]);
	void ConvertNWrite(std::string inc[], System::String^ &out);
	void StringToFloatConv(std::string inc[], float out[], int length);
	void ModeToStringConv(ModeVals inc, std::string out[], int length);

public:

	Frame(std::string = "<0>");
};

class LongFrame : protected Frame
{
protected:
	std::string interWords[LONG_FRAME_LENGTH];
	float convertedValues[LONG_FRAME_LENGTH];

public:

	LongFrame(std::string = "<0>");

	friend void FrameToData(System::String^ readline, DataVals &data, LongFrame &LF);

};


class ShortFrame : protected Frame
{
protected:
	std::string interWords[SHORT_FRAME_LENGTH];
	float convertedValues[SHORT_FRAME_LENGTH];

public:

	ShortFrame(std::string = "<0>");
	friend System::String^ SendFrame(ModeVals &mode, ShortFrame &SF);

};