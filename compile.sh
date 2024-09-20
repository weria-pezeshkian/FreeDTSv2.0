#!/bin/bash

# Weria Pezeshkian
# Niels Bohr International Academy
# Niels Bohr Institute
# University of Copenhagen

cd dts_src
g++ -c -O3 -std=c++11 *.cpp
g++ -o DTS *.o
mv DTS ../
cd ..
cd dts_convert
g++ -c -O3 *.cpp
g++ -o CNV *.o
mv CNV ../
cd ..

cd dts_generate
g++ -c -O3 *.cpp
g++ -o GEN *.o
mv GEN ../
cd ..



