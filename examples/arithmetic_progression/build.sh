#!/usr/bin/env bash

mkdir build
cmake -B build
cmake --build build
ctest --test-dir build

