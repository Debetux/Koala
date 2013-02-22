################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Koala.cpp \
../src/KoalaEntry.cpp \
../src/KoalaFormFactory.cpp \
../src/KoalaFrame.cpp \
../src/KoalaMainForm.cpp \
../src/KoalaPanelFactory.cpp \
../src/KoalaTab1.cpp \
../src/KoalaTab2.cpp \
../src/KoalaTab3.cpp 

OBJS += \
./src/Koala.o \
./src/KoalaEntry.o \
./src/KoalaFormFactory.o \
./src/KoalaFrame.o \
./src/KoalaMainForm.o \
./src/KoalaPanelFactory.o \
./src/KoalaTab1.o \
./src/KoalaTab2.o \
./src/KoalaTab3.o 

CPP_DEPS += \
./src/Koala.d \
./src/KoalaEntry.d \
./src/KoalaFormFactory.d \
./src/KoalaFrame.d \
./src/KoalaMainForm.d \
./src/KoalaPanelFactory.d \
./src/KoalaTab1.d \
./src/KoalaTab2.d \
./src/KoalaTab3.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: C++ Compiler'
	clang++.exe -I"pch" -D_DEBUG -I"C:\Users\Debetux\Dropbox\Tizen\Koala\inc" -O0 -g3 -Wall -c -fmessage-length=0 -target i386-tizen-linux-gnueabi -gcc-toolchain C:/Users/Debetux/TizenSDK/tizen-sdk/tools/smart-build-interface/../i386-linux-gnueabi-gcc-4.5/ -ccc-gcc-name i386-linux-gnueabi-g++ -march=i386 -Wno-gnu -fPIE --sysroot="C:/Users/Debetux/TizenSDK/tizen-sdk/platforms/tizen2.0/rootstraps/tizen-emulator-2.0.cpp" -I"C:/Users/Debetux/TizenSDK/tizen-sdk/platforms/tizen2.0/rootstraps/tizen-emulator-2.0.cpp/usr/include" -I"C:/Users/Debetux/TizenSDK/tizen-sdk/platforms/tizen2.0/rootstraps/tizen-emulator-2.0.cpp/usr/include/libxml2" -I"C:\Users\Debetux\TizenSDK\tizen-sdk\library" -I"C:/Users/Debetux/TizenSDK/tizen-sdk/platforms/tizen2.0/rootstraps/tizen-emulator-2.0.cpp/usr/include/osp" -D_APP_LOG -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


