
#include "Podcast.h"
using namespace std;

Podcast::Podcast(string tit,string art,int dur,int epi,string g) : AudioStream(tit,art,dur),episodeNumber(epi),guest(g){}

void Podcast::play() const{
    cout << "Now playing Podcast: " << title << " Episode " <<"#" << episodeNumber << ",featuring " << guest << "." << endl;
}