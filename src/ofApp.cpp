#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //sets up the enviroment
    background.load("images/background.png");
    robot.direction = 0;
    robot.image.load("images/mecha21.png");
    robot.moving=1;
    


}

//--------------------------------------------------------------
void ofApp::update(){
    
    robot.start();

}

//--------------------------------------------------------------
void ofApp::draw(){

    background.draw(0, 0);
    robot.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    //testing
    switch(key)
    {
        case OF_KEY_LEFT:
            robot.direction = 1;
            break;
        case OF_KEY_RIGHT:
            robot.direction= 2;
            break;
        case OF_KEY_UP:
            robot.direction=3;
            break;
        case OF_KEY_DOWN:
            robot.direction= 0;
            break;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}


void Robot::draw()
{
    if(moving>0)
    {
        if(moving==1)
        {
            moving++;
        }
        else
        {
            moving--;
        }
    }
    image.drawSubsection(position.x, position.y, 50, 50, moving*50, direction*50, 50, 50);
}

void Robot::start()
{
    if( direction==0)
    {
        position.y = position.y +1;

    }
    else if(direction == 1)
    {
        position.x = position.x -1;
    }
    else if(direction==2)
    {
        position.x = position.x +1;
    }
    else{
        position.y = position.y-1;
    }
}



