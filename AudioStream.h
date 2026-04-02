#pragma once
#include <string>
#include "AudioBuffer.h"
using namespace std;

class AudioStream {
protected:
    string title;
    int duration;
    AudioBuffer buffer;

public:
    AudioStream(string tit, int dur);
    virtual ~AudioStream();

    virtual void print();
    virtual void play() const;
};