#include <windows.h>

int main(int argc, char** argv)
{
   auto mod = LoadLibrary("test2.dll");
   using fn = void();

   fn* func = (fn*)GetProcAddress(mod, "wrapper");
   func();
   return 0;
}