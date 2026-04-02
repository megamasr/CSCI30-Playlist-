#pragma once

#include "Playlist.h"
#include "Song.h"
#include "Podcast.h"
#include <iostream>
using namespace std;

class Playlist{
private:
AudioStream* m_list[100];
int m_count;
public:
Playlist();

void addStream(AudioStream* s);
void addSong(string title, string artist, int duration, string album);
void addPodcast(string title, string host, int duration, int episode, string guest);
void playAll();
void showPlaylist();
void swapSongs(int index1,int index2);
~Playlist();
};