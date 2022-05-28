#include <string>

namespace Hello
{
    class HelloWorld{
        private: std::string msg;
        public: HelloWorld();
        public: void SayHello();
        private: void Initialize();
        public: HelloWorld Get();
    };
} // namespace Hello

