#include "repro.h"

extern "C"
{
   __declspec(dllexport) void wrapper()
   {
      hw();
   }

}