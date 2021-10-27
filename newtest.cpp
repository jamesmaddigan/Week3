#include <iostream>
#define NUM_CHANNELS 3
#define NUM_FRAMES 4



int main() {
    
    std::string non_interleaved_buffer[NUM_CHANNELS*NUM_FRAMES] = {"A0", "A1", "A2", "A3", "B0", "B1", "B2", "B3", "C0", "C1", "C2", "C3"};
    
    std::string interleaved_buffer[NUM_FRAMES*NUM_CHANNELS];
    
    // Interleaved input buffer
    
    
    
    std::string f0[NUM_CHANNELS];         // Array f0 indicates first frame of each channel
    std::string f1[NUM_CHANNELS];
    std::string f2[NUM_CHANNELS];
    std::string f3[NUM_CHANNELS];
    
    std::string* buffer[NUM_FRAMES] = {f0, f1, f2, f3};  //Array of pointers for each channel
    std::string** ptr = buffer;        // Double pointer to itterate through each buffer pointer
    
    
    for(int x=0; x<NUM_FRAMES; x++){
         
    for(int i=0; i<NUM_CHANNELS; i++){
        ptr[x][i] = non_interleaved_buffer[NUM_FRAMES*i + x];
    }
    }
    
    //the channel you are on times the total number of frames plus the current frame you are (if on second channel of the first frame array f0, x = 0 as itterate through first frame of each channel and i = 1 for second channel (second element of frame 0 array)
        
    // Double for loop that itterates through each Channel and points to
    
    int y {0};
    for (int i=0; i<NUM_FRAMES; i++){
        for (int j=0; j<NUM_CHANNELS; j++){
            interleaved_buffer[y] = ptr[i][j];
            y++;
        }
    }
    
    for (int i=0; i<(NUM_CHANNELS*NUM_FRAMES); i++){
    
        std::cout << interleaved_buffer[i] << " ";
    }
    return 0;
}



