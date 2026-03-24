#pragma once
#include "libary.h"

using namespace std;
class AudioStream{
protected:
string title;
string artist;
int duration;
public:

AudioStream(string tit,string art,int dur);
void print();
virtual ~AudioStream();
virtual void play() const = 0;
};