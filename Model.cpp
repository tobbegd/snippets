#include "Model.hpp"  
#include <iostream>
using namespace std;

Model::Model()
{
    //ctor
    _class_name = __func__;
}

void Model::setKeyListener(KeyListener *keyListener){this->_key_listener = keyListener;}
KeyListener * Model::getKeyListener(){return this->_key_listener;}

void Model::setBugger(Bugger * bugger){ 
    this->_bugger = bugger; 

    if(Model::IS_DEBUG){
        this->_bugger->trace("DEBUGGING IS TRUE!!!", this->_class_name);
    }
}

Bugger * Model::getBugger(){ return this->_bugger;}



Model::~Model()
{
    //dtor
}