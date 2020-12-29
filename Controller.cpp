#include "Controller.hpp"  
#include <vector>

Controller::Controller(Model* mdl)
{
    //ctor
    _model = mdl;
    _bugger = _model->getBugger();
    _bugger->trace("--instance--",__func__);
}

Model * Controller::getModel(){return _model;}

// Instance the keylistener and start loops
void Controller::initKeyListener(vector<int> keycodes){

    this->_bugger->trace("initKeylistener", __func__);
    KeyListener keyListener(keycodes, this->_bugger);

    this->_model->setKeyListener(&keyListener);
    KeyListener *key_list = this->_model->getKeyListener();
    key_list->listen();
}





Controller::~Controller()
{
    //dtor
}