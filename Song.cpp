#include "Song.h"
#include <iostream>
using namespace std;

Song::Song(string tit, string art, int dur, string alb)
    : AudioStream(tit, dur), artist(art), albumName(alb) {}

void Song::print() {
    cout << "The stream \"" << title
         << "\" is " << duration
         << " seconds, performed by "
         << artist << "." << endl;
}

void Song::play() const {
    cout << "Now playing Song: " << title
         << " by " << artist
         << " [Album: " << albumName << "]" << endl;
         

    AudioStream::play();
}