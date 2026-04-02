#pragma once

#include "AudioStream.h"
using namespace std;
class Song : public AudioStream{
 private: 
 string artist;
 string albumName;
 public:

  Song(string tit,string art,int dur,string alb);
  void print() override;
  void play() const override;
};