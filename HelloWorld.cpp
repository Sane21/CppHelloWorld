#include <string>
#include "HelloWorld.hpp"

using namespace Hello;


HelloWorld::HelloWorld(){
    Initialize();
}

void HelloWorld::Initialize(){
    this->msg = "Hello World!";
}   

void HelloWorld::SayHello(){
    printf("%s\n", this->msg.c_str());
}

HelloWorld HelloWorld::Get(){
    printf("hgoe ");
    return *this;
}
