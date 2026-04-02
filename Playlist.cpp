#include "Playlist.h"


using namespace std;

Playlist::Playlist() : m_count(0)
{
    for(int i=0;i< 100; ++i){
        m_list[i]= nullptr;
    }
}
void Playlist::addSong(string title, string artist, int duration, string album) {

    cout << "Adding Song: " << title << "..." << endl;

    try {
        AudioStream* s = new Song(title, artist, duration, album);
        addStream(s);
    }
    catch (exception& e) {
        cout << "[Playlist]: Failed to add " << title << " -> " << e.what() << endl;
    }
}
void Playlist::addStream(AudioStream* s){
    m_list[m_count] = s;
    m_count++;
}
void Playlist::addPodcast(string title, string host, int duration, int episode, string guest){
   
    cout << "Adding Podcast: " << title << "...";
    try {
        AudioStream* p = new Podcast(title, host, duration, episode, guest);
        addStream(p);
    }
    catch (exception& e) {
        cout << "[Playlist]: Failed to add " << title << " -> " << e.what() << endl;
    }
}


  void Playlist::playAll(){
    cout << "\n--- Playing Your Playlist ---" << endl;
   for(int i =0;i <  m_count; i++ ){
   m_list[i] -> play();
   }
   
   }
   void Playlist::showPlaylist(){
    cout << endl;
    cout << "\n--- Listing Your Playlist ---" << endl;
    for(int i = 0; i < m_count; i++){
        cout << i << ":";
        m_list[i]->print();
    
    }
   }
   void Playlist::swapSongs(int index1, int index2) {

    if (m_count < 2) {
        throw logic_error("LOGIC ERROR: Playlist must contain at least 2 items.");
    }

    if (index1 < 0 || index2 < 0 || index1 >= m_count || index2 >= m_count) {
        throw range_error("RANGE ERROR: Invalid indices.");
    }

    AudioStream* temp = m_list[index1];
    m_list[index1] = m_list[index2];
    m_list[index2] = temp;
}
    Playlist::~Playlist(){
     for(int i = 0; i < m_count; i++){
      delete m_list[i];
       }
       m_count = 0;
    }
        
     



