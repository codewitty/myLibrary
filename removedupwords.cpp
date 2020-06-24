#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <unordered_set>

using namespace std; 
  
void removeDupWord(string str) 
{ 
    // Used to split string around spaces. 
    istringstream ss(str); 
  
    // To store individual visited words 
    unordered_set<string> hsh; 
  
    // Traverse through all words 
    do
    { 
        string word; 
        ss >> word; 
  
        // If current word is not seen before. 
        while (hsh.find(word) == hsh.end()) { 
            cout << word << " "; 
            hsh.insert(word); 
        } 
  
    } while (ss); 
} 
  
// Driver function 
int main() 
{ 
    string str = "#hikemore #outdoorsy #optoutside #mountains #ZionNPS #utah #nps #naturelovers #natureporn #hikingtherapy #snapseed  #serene #naturelovers #adventureiscalling  #optoutside #hikinglifestyle #outdooraddict #idhikethat #allaboutadventures #yosemite #adventureculture #nps #findyourpark #nationalparkgeek #YosemiteNPS #cloudsandmountains"
"#hikingismagical #peoplewhoadventure  #trekkingtoes  #hikingheartbeat #gogalavanting  #outdoorsy #hikemore #mountainpeopleunite #findyourpark #optoutside #naturelovers #sheisnotlost #womenwhohike #natureporn #naturephotography #mountainporn #explore #travelgram #outdoorculture #landscapephotography #outdoors #instatravel #roadtrip #nationalparkgeek #angelslanding #snapseed #instapic  #instagood #view  #hiking  #myjourneybeforedestination";
    removeDupWord(str); 
    return 0; 
} 
