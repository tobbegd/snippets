#include <iostream>
#include "Controller.hpp"
#include "KeyListener.hpp"
#include "Model.hpp"
#include <vector>
#include "Bugger.hpp"
using namespace  std;

bool Model::IS_DEBUG = true;

int main(){

    cout << "* main *" << endl;


    Model model;
    Model *model_p = &model;
    
    Bugger bugger;
    model_p->setBugger(&bugger);
    Bugger *bugi = model_p->getBugger();
    bugi->trace("a test call", __func__);

    Controller controller(model_p);
    Controller *controller_p = &controller;

    vector<int> keycodes = {27, 105, 100, 115};
    controller_p->initKeyListener(keycodes);



   /*  KeyListener keyListener(keycodes);
    KeyListener* kl = &keyListener;
    kl->listen(); */ 
    return 0;
}