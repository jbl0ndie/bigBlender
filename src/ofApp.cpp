#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);

    ofDirectory dir( ofToDataPath("images"));
    int filesCount = dir.listDir();
    vector<ofFile> files = dir.getFiles();
    for( int i=0;i<files.size();i++ ){
        ofLog() << i << " => " << files[i].getAbsolutePath();
//        files[i].getExtension().
        images.push_back( ofImage(files[i].getAbsolutePath()) );
    }
    
    intensity = 100;
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(255);
    if( images.size() > 0 ){
//        images[0].draw(0, 0); // draw the first image without a blend
        ofSetColor(intensity);
        for( int i=0;i<images.size();i++ ){
            ofEnableBlendMode( OF_BLENDMODE_ADD );
            images[i].draw(0, 0);
        }
        ofDisableBlendMode();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    intensity = 255 * x / ofGetWindowWidth();
//    intensity = ofClamp( intensity, 0, 20);
    intensity = ofLerp(<#float start#>, <#float stop#>, <#float amt#>)
    // TODO: see if ofLerp() would be a better way of range mapping?
    
    cout << intensity << endl;
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

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
