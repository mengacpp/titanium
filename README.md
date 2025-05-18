
# Titanium

![[](LICENSE)](https://img.shields.io/badge/License-MIT-4078c0.svg)
![Version: beta](https://img.shields.io/badge/Version-beta-333.svg)

Titanium is a lightweight game engine that I'm developing on my own for learning purposes.

## Overview

Titanium is a project with the goal of creating an open source game engine, from where you can learn about game engines architecture in a free way.

It is not meant to be in any way a lucrative project or a commercial game engine like Unity or UE.

## Features

> [!IMPORTANT]
> Titanium development still in early stage, you can't use Titanium to develop games as of now.

Here is a list of features that are planned to be implemented, and wether or not they are yet:

- [x] Window opens 😃
- [ ] renderer
- [ ] Platinum (Titanium editor)

## Prerequisites

To build Titanium these tools are required to be installed on your machine:

- [CMake 3.15+](https://cmake.org)
- A C++17 compiler

> [!NOTE]
> Every external library used by titanium is provided in the GitHub repostory.

Titanium is linking to these libraries:

- [GLFW](https://github.com/glfw/glfw)
- [Oxygen](https://github.com/mengacpp/oxygen)
- [Neon](https://github.com/mengacpp/neon)

## Build

1. Clone the repostory with the `--recursive` flag to make sure that all submodules are initialized and updated:

    ```cli
    git clone --recursive https://github.com/mengacpp/titanium
    ```

    If you have already cloned the repostory without the `--recursive` flag, navigate to the directory and run `git submodule update --init --recursive` to initialize and update the submodules now.
2. Navigate to the directory where you cloned the repostory and run CMake to build and compile Titanium:

    ```cli
    cmake -B build -DCMAKE_BUILD_TYPE=Release
    cmake --build build
    ```

    As of now, by building titanium you'll only get a static library: not that useful!
