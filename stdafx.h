#pragma once

#ifndef WIN_32_LEAN_AND_MEAN
#define WIN_32_LEAN_AND_MEAN
#endif // !WIN_32_LEAN_AND_MEAN

#include <windows.h>
#include <d3d12.h>
#include <dxgi1_4.h>
#include <d3dcompiler.h>
#include <DirectXMath.h>
#include "d3dx12.h"

//Handle to the window
HWND hwnd = NULL;
//name of the window
LPCTSTR windowName = L"MyWindowName";
//title of the window
LPCTSTR windowTitle = L"MyTitleName";

//size of the window
int width = 600;
int height = 480;
bool FullScreen = false;

bool InitializeWindow(HINSTANCE hInstance, int ShowWnd, int width, int height, bool fullScreen);
void mainLoop();
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
