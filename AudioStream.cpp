
#include "AudioStream.h"
using namespace std;

AudioStream::AudioStream(string tit,string art,int dur): title(tit),artist(art),duration(dur){}
 
 AudioStream::~AudioStream(){}

   void AudioStream::print(){
    cout << "The stream \"" << title
         << "\" is " << duration
         << " seconds, performed by "
         << artist << "." << endl;
}

