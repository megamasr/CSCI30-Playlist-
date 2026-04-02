#include "AudioStream.h"
#include <iostream>
using namespace std;

AudioStream::AudioStream(string tit, int dur)
    : title(tit), duration(dur), buffer(dur, tit) {}

AudioStream::~AudioStream() {}

void AudioStream::print() {
    cout << "The stream \"" << title
         << "\" is " << duration
         << " seconds." << endl;
}

void AudioStream::play() const {
    buffer.play();
}