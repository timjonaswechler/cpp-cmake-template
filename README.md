# CMake C++ Project Template

## 🚀 Overview

This project provides a versatile CMake template designed to simplify the setup process for C++ projects across multiple platforms. Its main goal is to make it easier for developers to start building C++ applications with a focus on cross-platform compatibility.

[Link to CMake](https://cmake.org/cmake/help/latest/)

## Table of Contents

- [🚀 Overview](#-overview)
- [🛠️ Setup and Usage Guide](#️-setup-and-usage-guide)
  - [General Information on CMake](#general-information-on-cmake)
    - [CMakeLists](#cmakelists)
    - [CMakePresets](#cmakepresets)
  - [⚙️ Prerequisites](#️-prerequisites)
  - [Cloning the Repository](#cloning-the-repository)
  - [Configuring the Project](#configuring-the-project)
  - [Placeholder Values for Configurations](#placeholder-values-for-configurations)
  - [Building the Project with CMake Workflow](#building-the-project-with-cmake-workflow)
  - [Clean Build Directory](#clean-build-directory)
  - [Running applicaiton](#running-applicaiton)
- [Template tested on](#template-tested-on)
    - [Compatibility Note](#compatibility-note)
- [📝 License](#-license)
- [TODO](#todo)

## 🛠️ Setup and Usage Guide

This section will guide you through the initial steps to get your C++ project up and running using this CMake template.

### General Information on CMake

#### CMakeLists

The `CMakeLists.txt` file is the main configuration file for CMake. It contains the instructions for CMake to build your project. This file is used to specify the project name, version, and the source files to be compiled. It also includes the configuration settings for the build process, such as compiler flags, build type, and output directories. For more information on CMakeLists, refer to the [official CMake documentation](https://cmake.org/cmake/help/latest/manual/cmake-language.7.html).

#### CMakePresets

The `CMakePresets.json` file is a configuration file used in CMake to define build presets, which are a way to specify a collection of CMake settings in a structured and sharable format. This file is particularly useful for larger projects or when working in a team, as it helps ensure a consistent configuration across different environments. For more information on CMakePresets, refer to the [official CMake documentation](https://cmake.org/cmake/help/latest/manual/cmake-presets.7.html).

### ⚙️ Prerequisites

Before you begin, ensure you have the following installed:

* CMake (version 3.27.6 or higher)
* A suitable C++ compiler (e.g., GCC, Clang or MSVC for Windows)

### Cloning the Repository

Start by cloning this repository to your local machine. Use the following command:

```shell
git clone https://github.com/timjonaswechler/cpp-cmake-template.git
```

### Configuring the Project

In the `CMakePresets.json` file, you can define different variables under the `configurePresets` section. There is a preset called `default` that is used as a starting point. This preset contains the cache variables that are used to configure the project.
this variable get passed to the `CMakeLists.txt` file and can be used to configure the project. You can access these variables using the value of the variable with `${<variable_name>}` in the `CMakeLists.txt` file.

As now the cache variables are:

* `PROJECT_NAME`: The name of the project
* `PROJECT_VERSION`: The version of the project
* `CMAKE_CXX_STANDARD_REQUIRED`: Whether the C++ standard is required or not
* `CMAKE_CXX_STANDARD`: The C++ standard to use (e.g., `11`, `14`, `17`, `20`)

further down in the `CMakePresets.json` file you can more cache variables like:

* `CMAKE_BUILD_TYPE`: The build type (e.g., `Debug`, `Release`, `MinSizeRel`, `RelWithDebInfo`)
* `CMAKE_OSX_ARCHITECTURES`: The architectures to build on your platform (e.g., `arm64`, `x86`)
* `CMAKE Compiler`: The compiler to use (e.g., `clang`, `gcc`, `msvc`)

Later on i will add more cache variables to configure the project or you can do it yourself as you need.

### Placeholder Values for Configurations

In the following instructions, placeholders `{arch}`, `{os}`, and `{build}` are used. These can be replaced with the corresponding values from the table below.

| **Setting**     | **Options**      | **Coming Soon**  |
| --------------------- | ---------------------- | ---------------------- |
| **`{arch}`**  | `x64arm`             | `x64`, `x86`       |
| **`{os}`**    | `macos`              | `linux`, `windows` |
| **`{build}`** | `debug`, `release` | `dist`               |

### Building the Project with CMake Workflow

To build the project using the CMake workflow for a specific configuration, run the following command:

```shell
cmake --workflow --preset {arch}_{os}_{build}
```

Replace `{arch}_{os}_{build}` with your desired build configuration (e.g., `x64arm_macos_debug`, `x64arm_macos_release`). This command will configure and build the project for the specified configuration on macOS using the specified CMake preset.

### Clean Build Directory

To clean the build artifacts for a specific configuration, use the following command:

```shell
rm -rf build/{arch}_{os}_{build}
```

Replace `{arch}_{os}_{build}` with your desired build configuration (e.g., `x64arm_macos_debug`, `x64arm_macos_release`). This command will remove all build artifacts for the specified configuration on macOS.

### Running applicaiton

To run the application you found the executable in the build directory under the following path:

```shell
./build/{arch}_{os}_{build}/
```

## Template tested on

The template has been tested on the following configurations:

* **CMake Version**: 3.27.6
* **Compiler**: Apple Clang version 15.0.0 (clang-1500.1.0.2.5)
* **Processor Architecture**: x64arm
* **Build System Generator**: Unix Makefiles

### Compatibility Note

While the project has been tested with the specific configurations listed above, it is designed to be compatible with a variety of environments and setups. Users are encouraged to test and adapt the project in different environments and share feedback or issues encountered. This will aid in enhancing the project's compatibility and robustness across diverse systems.

## 📝 License

This project is licensed under the MIT License - see the [LICENSE](https://github.com/timjonaswechler/Chicken105/blob/main/LICENSE) file for details.

## TODO

* [ ] **Clarify Different Output Formats:** For Windows users, who typically work with Visual Studio, ensure instructions are available for generating a `.sln` file via CMake. Linux users predominantly use Makefiles, so ensure the output format includes Makefile generation. For MacOS users, provide guidance for generating either Makefiles or `.xcodeproj` files, as they may use either MakeFiles or XCode.
* [ ] **Detailing Overriding of CMakeLists.txt via CMakePresets.json:** Emphasize that settings in `CMakeLists.txt` can be superseded by configurations in `CMakePresets.json`. Ensure this capability is clearly documented for users to understand how to customize their build process.
* [ ] **Guide on Accessing and Utilizing CMakePresets.json Values:** Develop a section or a guide demonstrating how users can access and apply the values specified in `CMakePresets.json` to their projects.
* [ ] **Provide Comprehensive CMake Documentation:** Include in-depth documentation about CMake, focusing on its features, capabilities, and how it integrates into the project. This documentation should serve as a resource for both new and experienced users.
* [ ] **Instructions for Using Various Compilers:** Add a segment or instructions for incorporating and utilizing different compilers in the project. This section should guide users through the process of setting up and configuring the compilers as per their project needs.


