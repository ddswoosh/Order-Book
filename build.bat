del *.exe
del /S /Q build
mkdir build

cmake -B build -G "MinGW Makefiles" ^
      -DCMAKE_CXX_COMPILER="E:/Qt5/Tools/mingw810_64/bin/g++.exe" ^
      -DCMAKE_MAKE_PROGRAM="E:/Qt5/Tools/mingw810_64/bin/mingw32-make.exe" ^
      -DCMAKE_PREFIX_PATH:PATH="E:/Qt5/5.15.2/mingw81_64/lib/cmake"

cd build
start /wait mingw32-make.exe
move ORDER_BOOK_0.0.1.exe ../ORDER_BOOK_0.0.1.exe
start ../ORDER_BOOK_0.0.1.exe