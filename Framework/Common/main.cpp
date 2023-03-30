#include <stdio.h>
#include "IApplication.hpp"

using namespace My;
namespace My {
    extern IApplication* g_pApp;
}

int main(int argc, char** argv)
{
    printf("hello main\n");
    // int ret;
    // if((ret = g_pApp->Initialize()) != 0)    {
    //     printf("App Initialize failed, will exit now.");
    //     return ret;
    // }

    // while(!g_pApp->IsQuit()) {
    //     printf("main loop\n");
    //     g_pApp->Tick();
    // }

    return 0;
}