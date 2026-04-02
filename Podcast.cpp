#include "Podcast.h"
#include <iostream>
using namespace std;

Podcast::Podcast(string tit, string host, int dur, int epi, string g)
    : AudioStream(tit, dur), host(host), episodeNumber(epi), guest(g) {}

void Podcast::print() {
    cout << "The stream \"" << title
         << "\" is " << duration
         << " seconds, performed by "
         << host << "." << endl;
}

void Podcast::play() const {
    cout << "Now playing Podcast: " << title
         << " Ep #" << episodeNumber << ""
         << " (Host: " << host
         << ", Guest: " << guest << ")" << endl;

    AudioStream::play();
}