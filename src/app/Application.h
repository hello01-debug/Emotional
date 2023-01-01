#pragma once

#include <emu/Bus.h>
#include <emu/cpu/EmotionEngine.h>
#include <SDL2/SDL.h>
#include <3party/opengl.h>

extern bool shouldCullFb;

class Application
{
private:
    static bool isRunning;
    static int exit_code;

    static Bus* bus;
    static EmotionEngine* ee;
public:
    static bool Init(int argc, char** argv);
    static int Run();
    static void Exit(int code);
    static void Exit();
    static void Dump()
    {
        ee->Dump();
    }
};