# CMake C++ Project Template

## 🚀 Introduction

Welcome to my CMake C++ Project Template! This repositories is designed to streamline the setup and management of C++ projects across various platforms, emphasizing cross-platform compatibility. Whether you're a seasoned developer or new to C++, this template offers a structured, user-friendly approach to project configuration and building, leveraging the power of CMake.

### What is CMake?

CMake is a widely-used, open-source build system. It simplifies the process of managing the build process of software projects, making it easier to handle across different platforms. CMake automates the compilation process, reducing the complexity of writing platform-specific build scripts. By using a series of simple configuration files, developers can specify build options, compiler settings, and target platforms, allowing CMake to generate native build environments, such as Makefiles on Unix and projects/workspaces in Windows MSVC.

This template serves as a starting point for C++ projects, providing pre-configured CMake scripts and settings to ensure a smooth development experience. Whether you are developing on Windows, Linux, or macOS, this template will help you to jumpstart your project with minimal setup.
[Link to CMake](https://cmake.org/cmake/help/latest/)

## Table of Contents

- [🚀 Introduction](#-introduction)
  - [What is CMake?](#what-is-cmake)
- [🛠️ Setup and Usage Guide](#️-setup-and-usage-guide)
  - [General Information on CMake](#general-information-on-cmake)
    - [CMakeLists](#cmakelists)
    - [CMakePresets](#cmakepresets)
  - [Prerequisites](#prerequisites)
  - [Cloning the Repository](#cloning-the-repository)
  - [Configuring the Project](#configuring-the-project)
  - [Building the Project with CMake Workflow](#building-the-project-with-cmake-workflow)
    - [Placeholder Values for Configurations](#placeholder-values-for-configurations)
  - [Clean Build Directory](#clean-build-directory)
  - [Running the Application](#running-the-application)
- [Template tested on](#template-tested-on)
- [📝 License](#-license)
- [🛣️ Roadmap for Future Developments](#️-roadmap-for-future-developments)

# 🛠️ Setup and Usage Guide

## General Information on CMake

### CMakeLists

The `CMakeLists.txt` file is the centerpiece of a CMake project. It defines how your project is built and includes directives and instructions that tell CMake how to organize the build process. Here's a simple example to illustrate:

```cmake
cmake_minimum_required(VERSION 3.10)
project(MyProject VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(MyProject main.cpp)
```

In this example, the `cmake_minimum_required` command specifies the minimum version of CMake required. The `project` command names your project and sets its version. The C++ standard is set using `set(CMAKE_CXX_STANDARD 17)`. Finally, `add_executable` tells CMake to create an executable named `MyAwesomeProject` from the source file `main.cpp`. For more information on [CMakeLists](https://cmake.org/cmake/help/latest/manual/cmake-language.7.html).

### CMakePresets

The `CMakePresets.json` file streamlines the configuration of CMake projects across different environments and platforms. It allows you to define preset configurations that can be used to easily switch between different build setups. Here's a basic example:

```json
{
  "version": 3,
  "cmakeMinimumRequired": {
    "major": 3,
    "minor": 19,
    "patch": 0
  },
  "configurePresets": [
    {
      "name": "default",
      "hidden": false,
      "description": "Default build for native compilers",
      "generator": "Ninja",
      "binaryDir": "${sourceDir}/out/build/${presetName}",
      "cacheVariables": {
        "CMAKE_BUILD_TYPE": "Debug",
        "CMAKE_CXX_STANDARD": "17",
        "MY_CUSTOM_DEFINITION": "value"
      }
    }
  ]
}
```

In this `CMakePresets.json` example, a preset named `default` is defined. It uses the Ninja generator and sets the binary directory relative to the source directory. The `cacheVariables` set important project variables, like the build type and C++ standard. For more information on [CMakePresets](https://cmake.org/cmake/help/latest/manual/cmake-presets.7.html).

## ⚙️ Prerequisites

Before diving into the project, it's crucial to ensure that your development environment meets the following prerequisites. These are essential for the successful configuration, building, and running of your C++ projects using this CMake template.

1. **CMake:**

   - **Minimum Version Required:** 3.27.6
   - CMake is a cross-platform build system generator. You can download and install it from [the official CMake website](https://cmake.org/download/).
   - To verify your CMake version, run `cmake --version` in your command line.


1. **C++ Compiler:**

   - Compatible compilers include GCC, Clang, and MSVC (for Windows).
   - **Minimum GCC Version:** 7.5.0
   - **Minimum Clang Version:** 10.0.0
   - **Minimum MSVC Version:** 19.27 (Visual Studio 2019 Version 16.7)
   - Ensure that the compiler is properly installed and configured in your system's PATH. You can verify the installation by running `gcc --version`, `clang --version`, or `cl --version` in your command line, depending on the compiler you are using.
4. **Git:**

   - Git is required for cloning the repository.
   - Download and install Git from [the official Git website](https://git-scm.com/downloads).
   - Verify the installation by running `git --version` in your command line.
5. **Text Editor or IDE:**

   - While any text editor will work, it's recommended to use an IDE or editor with good CMake support for a better development experience.
   - Some popular options include Visual Studio Code, CLion, and Eclipse.
6. **Optional Dependencies:**

   - Depending on the nature of your project, you may need additional libraries or tools. Ensure that these are installed and properly configured in your environment.

## Cloning the Repository

To start working with the CMake template, you first need to clone the repository to your local machine. 
Use the following command to clone the repository:

```shell
git clone https://github.com/timjonaswechler/cpp-cmake-template.git
```

Navigate to the directory where you want the project to be copied and run the above command in your terminal or command prompt. This will create a new folder named `cpp-cmake-template` containing all the files from the repository.

## Configuring the Project

Once the repository is cloned, the next step is to configure the project for your specific environment. This is where you tailor the project settings to match your development setup.
In the `CMakePresets.json` file, you can define different variables under the `configurePresets` section. There is a preset called `default` that is used as a starting point. 
This variable get passed to the `CMakeLists.txt` file and can be used to configure the project. You can access these variables using the value of the variable with `${<variable_name>}` in the `CMakeLists.txt` file.

1. **Modify `CMakePresets.json`:**

   * `PROJECT_NAME`: The name of the project
   * `PROJECT_VERSION`: The version of the project
   * `CMAKE_CXX_STANDARD_REQUIRED`: Whether the C++ standard is required or not
   * `CMAKE_CXX_STANDARD`: The C++ standard to use (e.g., `11`, `14`, `17`, `20`)
   
   **Further down in the `CMakePresets.json` file there are variables like:**
   * `CMAKE_BUILD_TYPE`: The build type (e.g., `Debug`, `Release`, `MinSizeRel`, `RelWithDebInfo`)
   * `CMAKE_OSX_ARCHITECTURES`: The architectures to build on your platform (e.g., `arm64`, `x86`, `x86_64`)
   * `CMAKE_COMPILER`: The compiler to use (e.g., `clang`, `gcc`, `msvc`)

2. **Adding More Variables:**

   As your project grows, you might need to add more variables for specific configurations. These can be added to the `cacheVariables` section in `CMakePresets.json`.
   Later on, I will add more cache variables to configure the project or you can do it yourself as needed.

3. **Adding More Presets**

   Before you can build your project, there is an important step to do. In the `CMakePresets.json` file in the `configurePresets` section, you need to check if all the presets you need for building the project are included. 

   For example, if you want to build on an Apple Silicon Chip System, there should be a preset with the inherits `x64arm` and `macos`. If you want to build in debug mode, then you also need the inherit `debug`. After that, set a unique name, display name, description, and directory where the project will be built.

   It could look like this:

```json
{
  "inherits": ["x64arm", "debug", "macos", "vscode"],
  "name": "x64arm_macos_debug",
  "displayName": "x64arm Debug MacOS",
  "description": "x64arm Debug MacOS",
  "binaryDir": "${sourceDir}/build/${presetName}"
},
```

## Building the Project with CMake Workflow

To build the project using the CMake workflow for a specific configuration, run the following command:

```shell
cmake --workflow --preset {arch}_{os}_{build}
```

Replace `{arch}_{os}_{build}` with your desired build configuration (e.g., `x64arm_macos_debug`, `x64arm_macos_release`). This command will configure and build the project for the specified configuration on macOS using the specified CMake preset.

### Placeholder Values for Configurations

In this template, placeholders such as `{arch}`, `{os}`, and `{build}` are used in various instructions. These placeholders represent configurable aspects of the build process, allowing you to tailor the build commands to your specific environment and needs. Replace these placeholders with the appropriate values based on your system and build requirements. Below is a guide to understanding and replacing these placeholders:

| Placeholder | Description                                      | Possible Values                        |
| ----------- | ------------------------------------------------ | -------------------------------------- |
| `{arch}`  | Refers to the processor architecture.            | `x64`, `x64arm`, `x86`           |
| `{os}`    | Indicates the operating system.                  | `macos`, `linux`, `windows`      |
| `{build}` | Represents the type of build you are performing. | `debug`, `release`, `MinSizeRel` |

For example, if you are building a debug version of the project on a macOS system with an ARM architecture, you would replace `{arch}_{os}_{build}` with `arm_macos_debug`.

## Clean Build Directory

To maintain a clean and organized workspace, it's important to know how to clean your build directory. This removes all previously compiled files, ensuring that your next build starts from a clean state. Here's how to do it:

1. **Navigate to Your Project's Root Directory:**

   - Open a terminal and use the `cd` command to go to your project's root directory.
2. **Run the Clean Command:**

   ```shell
   rm -rf build/{arch}_{os}_{build}
   ```

   Replace the specific build configuration you want to clean (e.g., `x64arm_macos_debug`, `x64arm_macos_release`). This command removes the entire build directory for the specified configuration.

## Running the Application

To run the application you found the executable in the build directory under the following path:

```shell
./build/{arch}_{os}_{build}/
```

# Template tested on

The template has been tested on the following configurations:

* **CMake Version**: 3.27.6
* **Compiler**: Apple Clang version 15.0.0 (clang-1500.1.0.2.5)
* **Processor Architecture**: x64arm
* **Build System Generator**: Unix Makefiles

## Compatibility Note

While this project has been developed with cross-platform compatibility in mind, there are always unique scenarios and environments that might present challenges. Here are some important notes regarding compatibility:

- **Cross-Platform Support**: The template aims to support various platforms including macOS, Linux, and Windows. However, certain platform-specific nuances might affect the build process or runtime behavior.
- **Compiler Variations**: Different compilers may interpret or compile code slightly differently. It's recommended to test the project with your compiler of choice.

# 📝 License

This project is licensed under the MIT License - see the [LICENSE](https://github.com/timjonaswechler/cpp-cmake-template/blob/main/LICENSE) file for details.

# 🛣️ Roadmap for Future Developments

This roadmap outlines the planned enhancements and improvements for the CMake C++ Project Template. Our aim is to continuously evolve and adapt to meet the needs of modern C++ development practices and to support a wider range of users and use cases.

<!-- 1. **Enhanced Documentation for Different Output Formats:**

   - **Goals:**
     - Provide detailed instructions for generating `.sln` files in Visual Studio for Windows users.
     - Offer guidance for Linux users on generating and using Makefiles.
     - Include steps for MacOS users to create Makefiles or `.xcodeproj` files.
   - **Action Points:**
     - Compile tutorials and examples for each platform.
     - Test documentation with beginners to ensure clarity and comprehensiveness. -->
<!-- 2. **Detailed Guide on CMakeLists Overrides via CMakePresets.json:**

   - **Goals:**
     - Clearly document how settings in `CMakeLists.txt` can be overridden by `CMakePresets.json`.
   - **Action Points:**
     - Develop examples showing practical use cases of overrides.
     - Include troubleshooting tips for common issues related to configuration overrides. -->
<!-- 3. **Comprehensive CMake Feature Documentation:**

   - **Goals:**
     - Create in-depth documentation about CMake's features and capabilities.
     - Ensure it serves as a resource for both beginners and experienced users.
   - **Action Points:**
     - Collaborate with CMake experts for content accuracy and depth.
     - Incorporate visual aids (diagrams, flowcharts) to explain complex concepts.-->
<!-- 4. **Guide for Using Various Compilers:**

   - **Goals:**
     - Provide instructions for setting up and using different compilers (GCC, Clang, MSVC) in the project.
   - **Action Points:**
     - Document steps for compiler installation and configuration.
     - Include common troubleshooting scenarios for compiler-related issues. -->
<!-- 5. **Expand Testing on Various Platforms and Configurations:**

   - **Goals:**
     - Continuously test and ensure compatibility across various platforms and configurations.
   - **Action Points:**
     - Encourage community testing and feedback.
     - Regularly update the template based on new test results and community insights. -->
