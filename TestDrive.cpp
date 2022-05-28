#include "HelloWorld.hpp"


int main(void){
    Hello::HelloWorld hello;
    // Hello::HelloWorld* hello = new HelloWorld();
    hello.SayHello();
    // delete hello;
    // return 0; // 不要
    hello.Get().SayHello();
}
