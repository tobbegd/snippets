#include "KeyListener.hpp"  

KeyListener::KeyListener(vector<int> key_codes, Bugger * bugger)
{
    //ctor
    _bugger = bugger;
    _key_codes = key_codes;
    _class_name = __func__;
}

void KeyListener::listen(){

    this->_is_listening = true;
    this->_bugger->trace("listening!", this->_class_name);

    do {
      int key = this->keypress();

      for(int i=0; i < this->_key_codes.size(); ++i){

        cout << "looping \n" << this->_key_codes[i]  << endl;
        if(key == this->_key_codes[i]){
            cout << "valid command" << endl;
            this->stopListen();
            break;
        }
      }

      this->_is_listening = false;

      cout << key << "\n";

    } while (this->_is_listening);

}

int KeyListener::keypress() {
  system ("/bin/stty raw");
  int c;
  system("/bin/stty -echo");
  c = getc(stdin);
  system("/bin/stty echo");
  system ("/bin/stty cooked");
  return c;
}

void KeyListener::stopListen(){

    cout << "stopListen" << endl;
    this->_is_listening = false;
}

KeyListener::~KeyListener()
{
    //dtor
}