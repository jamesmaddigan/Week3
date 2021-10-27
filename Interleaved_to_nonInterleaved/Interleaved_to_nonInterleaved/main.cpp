
#include <iostream>
#define NUM_CHANNELS 3
#define NUM_FRAMES 4



int main() {
    
    std::string interleaved_buffer[NUM_CHANNELS*NUM_FRAMES] = {"A0", "B0", "C0", "A1", "B1", "C1", "A2", "B2", "C2", "A3", "B3", "C3"};
    
    std::string non_interleaved_buffer[NUM_FRAMES*NUM_CHANNELS];
    
    // Interleaved input buffer
    
    
    
    std::string A[NUM_FRAMES];     // Declare three string arrays for each channel
    std::string B[NUM_FRAMES];     // Array of length NUM of frames
    std::string C[NUM_FRAMES];
    
    std::string* buffer[NUM_CHANNELS] = {A, B, C};  //Array of pointers for each channel
    std::string** ptr = buffer;        // Double pointer to itterate through each buffer pointer
    
    
    for(int x=0; x<NUM_CHANNELS; x++){
         
    for(int i=0; i<NUM_FRAMES; i++){
        ptr[x][i] = interleaved_buffer[i*NUM_CHANNELS + x];
    }
        
    }
        
    // Double for loop that itterates through each Channel and points to
    
    int y{0};
    for (int i=0; i<NUM_CHANNELS; i++){
        for (int j=0; j<NUM_FRAMES; j++){
            non_interleaved_buffer[y] = ptr[i][j];
            y++;
        }
    }
    
    for (int i=0; i<(NUM_CHANNELS*NUM_FRAMES); i++){
    
        std::cout << non_interleaved_buffer[i] << " ";
    }
    return 0;
}

