#include "Bugger.hpp"  
#include "Model.hpp"

Bugger::Bugger()
{

}

void Bugger::trace(const char * input, const char * classname){

    if(Model::IS_DEBUG){
        cout << classname << "=> " << input << endl;
    }
}

Bugger::~Bugger()
{

}