#pragma once
#include "AudioStream.h"
using namespace std;

class Podcast : public AudioStream {
private:
    string host;
    int episodeNumber;
    string guest;

public:
   Podcast(string tit, string host, int dur, int epi, string g);
    void print();
    void play() const;
};