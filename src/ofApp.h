#pragma once

#include "ofMain.h"
class Robot{
public:
    void draw();
    void start();
    void update();
    void end();
    void turnLeft();
    void turnRight();
    void turnBAck();
    void advance();
    
    ofImage image;
    vector<ofVec3f> tiles;
    ofVec3f position;
    float direction, numberoftiles;
    float moving;
    
    
    
};


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        ofImage background;
    float direction;
    Robot robot;
    
		
};


