// stdafx.h: archivo de inclusión de los archivos de inclusión estándar del sistema
// o archivos de inclusión específicos de un proyecto utilizados frecuentemente,
// pero rara vez modificados
//

#pragma once

#include "targetver.h"
#include "argparse.hpp"

#include <stdio.h>
#include <tchar.h>
#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

typedef struct {
	string file;
	long offset;
	bool nopause;
	bool debug;
	long long preferredAddress;
} ProgramArgs, *pProgramArgs;

typedef void (*FUNC)(void);
int filter(unsigned int code, struct _EXCEPTION_POINTERS *ep);
void executeShellcode(bool debugging, FUNC shellcode);
void parse_args(pProgramArgs args, int argc, const char** argv);