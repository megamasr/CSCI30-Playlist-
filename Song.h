
#include "AudioStream.h"
using namespace std;
class Song : public AudioStream{
 private: 
 string albumName;
 public:

  Song(string tit,string art,int dur,string alb);

  void play() const;
};