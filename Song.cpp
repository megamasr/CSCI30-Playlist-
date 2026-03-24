
#include "Song.h"
using namespace std;

Song::Song(string tit,string art,int dur,string alb) : AudioStream(tit,art,dur), albumName(alb){}

void Song::play() const{
   
    cout << "Now playing Song: "  <<  title << " by " << artist << " from the album " << albumName << "." << endl;
 
}

