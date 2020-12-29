
#pragma once
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include "Bugger.hpp"

using namespace std;


class KeyListener
{
    public:
        KeyListener(vector<int> key_codes, Bugger * bugger);
        void listen();
        void stopListen();
        int keypress();
        //virtual void onKeyCode(int code);
        virtual ~KeyListener();

    protected:
        const char * _class_name;
        Bugger * _bugger;

    private:
        vector<int> _key_codes;
        bool _is_listening = false;
};