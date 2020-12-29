
#pragma once
#include "KeyListener.hpp"
#include "Bugger.hpp"

class Model
{
    public:
        Model();
        int test();
        void setKeyListener(KeyListener *key_listener);
        KeyListener * getKeyListener();
        void setBugger(Bugger *bugger);
        Bugger * getBugger();
        static bool IS_DEBUG;
        virtual ~Model();

    protected:

    private:
        KeyListener *_key_listener;
        const char * _class_name;
        Bugger *_bugger;
};