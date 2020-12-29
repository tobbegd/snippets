
#pragma once
#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include "Model.hpp"
#include "KeyListener.hpp"
#include "Bugger.hpp"

using namespace std;

class Controller
{
    public:
        Controller(Model* mdl);
        int keypress();
        void initKeyListener(vector<int>);
        Model * getModel();
        virtual ~Controller();

    protected:

    private:
        Model* _model;
        Bugger * _bugger;
};