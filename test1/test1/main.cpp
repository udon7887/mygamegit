#include <windows.h>
#include <d3dx9.h>
#include <dxerr.h>

#pragma comment( lib, "d3d9.lib" )
#if defined(DEBUG) || defined(_DEBUG)
#pragma comment( lib, "d3dx9d.lib" )
#else
#pragma comment( lib, "d3dx9.lib" )
#endif
#pragma comment( lib, "dxerr.lib" )

///*--------------------------------------------
//ÉÅÉCÉì
//---------------------------------------------*/
int WINAPI wWinMain(HINSTANCE hInst, HINSTANCE, LPWSTR, int)
{
	return 0;
}