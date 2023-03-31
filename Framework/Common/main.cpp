#include <stdio.h>
#include "IApplication.hpp"

using namespace My;
namespace My {
    extern IApplication* g_pApp;
}

int main(int argc, char** argv)
{
    int ret;
    if((ret = g_pApp->Initialize()) != 0)    {
        return ret;
    }

    while(!g_pApp->IsQuit()) {
        g_pApp->Tick();
    }
    return 0;
}