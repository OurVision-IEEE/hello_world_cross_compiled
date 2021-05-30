# hello_world_cross_compiled
Used Raspberry pi toolchain to cross compile to ARM7 architecture for raspberry pi

# Compile for arm architecture (cross compile!)
```bash
arm-linux-gnueabihf-g++ -Wall src/main.cpp include/tezz_printer.cpp -L include/tezz_printer.hpp -o app `pkg-config opencv --cflags --libs`
```
