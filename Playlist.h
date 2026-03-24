#include "AudioStream.h"
using namespace std;

class Playlist{
private:
AudioStream* m_list[100];
int m_count;
public:
Playlist();

void addStream(AudioStream* s);

void playAll();
void showPlaylist();
void swapSongs(int index1,int index2);
~Playlist();
};