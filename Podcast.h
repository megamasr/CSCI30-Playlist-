
#include "AudioStream.h"
using namespace std;

class Podcast : public AudioStream{
private:
int episodeNumber;
string guest;

public:
Podcast(string tit,string art,int dur,int epi,string g);
void play() const;

};