#include "Playlist.h"
#include "Song.h"
#include "Podcast.h"

using namespace std;
int main() {
  Playlist myPlaylist;

  myPlaylist.addStream(new Song("Blinding Lights", "The Weeknd", 200, "Pop")); 
  myPlaylist.addStream(new Song("Lose Yourself", "Eminem", 240, "Hip-Hop"));
  
  myPlaylist.addStream(new Podcast("Tech Talk", "Alice", 1800, 42, "Bob")); 
  myPlaylist.addStream(new Podcast("History Hour", "Dr. Smith", 2100, 10, "Jane"));
  
  myPlaylist.showPlaylist();

  myPlaylist.playAll();


}