#include<iostream>
using namespace std;

/*
    Base Class 1: Camera

    Function:
    - takePhoto()
      Input: No input
      Work: Simulates taking a photo
      Output: "Photo captured"
*/
class Camera {
public:
    void takePhoto() {
        cout << "Photo captured" << endl;
    }
};

/*
    Base Class 2: Phone

    Function:
    - makeCall()
      Input: No input
      Work: Simulates calling
      Output: "Calling..."
*/
class Phone {
public:
    void makeCall() {
        cout << "Calling..." << endl;
    }
};

/*
    Base Class 3: MusicPlayer

    Function:
    - playMusic()
      Input: No input
      Work: Simulates playing music
      Output: "Playing music..."
*/
class MusicPlayer {
public:
    void playMusic() {
        cout << "Playing music..." << endl;
    }
};

/*
    Derived Class: SmartPhone

    Inherits from:
    - Camera
    - Phone
    - MusicPlayer

    Function:
    - useFeatures()
      Work: Calls all base class functions
*/
class SmartPhone : public Camera, public Phone, public MusicPlayer {
public:
    void useFeatures() {
        takePhoto();   // from Camera
        makeCall();    // from Phone
        playMusic();   // from MusicPlayer
    }
};

int main() {

    /*
        Creating object of SmartPhone

        Working:
        - Accesses features of all base classes

        Expected Output:
        Photo captured
        Calling...
        Playing music...
    */
    SmartPhone s1;
    s1.useFeatures();

    return 0;
}