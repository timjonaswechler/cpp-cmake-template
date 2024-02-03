# CMake C++ Project Template

## Overview

This project provides a versatile CMake template designed to simplify the setup process for C++ projects across multiple platforms. Its main goal is to make it easier for developers to start building C++ applications with a focus on cross-platform compatibility.

[Link to CMake](https://cmake.org/cmake/help/latest/)

## Get Started

This section will guide you through the initial steps to get your C++ project up and running using this CMake template.

### Prerequisites

Before you begin, ensure you have the following installed:

* CMake (version 3.27.6 or higher)
* A suitable C++ compiler (e.g., GCC for Linux, Clang for MacOS, MSVC for Windows)
* Git (for version control)

### Step 1: Cloning the Repository

Start by cloning this repository to your local machine. Use the following command:

```shell
git clone [repository-url]
```

### Step 2: Configure the Project

#### 🚧 Coming soon 🚧

### Building and Cleaning the Project (Reworking)

In the following instructions, placeholders `{arch}`, `{os}`, and `{build}` are used. These can be replaced with the corresponding values from the table below.

| **Setting**     | **Options**      | **Coming Soon**  |
| --------------------- | ---------------------- | ---------------------- |
| **`{arch}`**  | `x64arm`             | `x64`, `x86`       |
| **`{os}`**    | `macos`              | `linux`, `windows` |
| **`{build}`** | `debug`, `release` | `dist`               |

### Clean Build Directory

To clean the build artifacts for a specific configuration, use the following command:

```shell
rm -rf build/{arch}_{os}_{build}
```

Replace `{arch}_{os}_{build}` with your desired build configuration (e.g., `x64arm_macos_debug`, `x64arm_macos_release`). This command will remove all build artifacts for the specified configuration on macOS.

### Building the Project with CMake Workflow

To build the project using the CMake workflow for a specific configuration, run the following command:

```shell
cmake --workflow --preset {arch}_{os}_{build}
```

Replace `{arch}_{os}_{build}` with your desired build configuration (e.g., `x64arm_macos_debug`, `x64arm_macos_release`). This command will configure and build the project for the specified configuration on macOS using the specified CMake preset.

## Running applicaiton

### 🚧 Coming soon 🚧

## Tested Configurations

The project has been rigorously tested under the following configurations:

* **CMake Version**: 3.27.6
* **Compiler**: Apple Clang version 15.0.0 (clang-1500.1.0.2.5)
* **Processor Architecture**: x64arm
* **Build System Generator**: Unix Makefiles

### Compatibility Note

While the project has been tested with the specific configurations listed above, it is designed to be compatible with a variety of environments and setups. Users are encouraged to test and adapt the project in different environments and share feedback or issues encountered. This will aid in enhancing the project's compatibility and robustness across diverse systems.

## TODO

* [ ] **Clarify Different Output Formats:** For Windows users, who typically work with Visual Studio, ensure instructions are available for generating a `.sln` file via CMake. Linux users predominantly use Makefiles, so ensure the output format includes Makefile generation. For MacOS users, provide guidance for generating either Makefiles or `.xcodeproj` files, as they may use either MakeFiles or XCode.
* [ ] **Detailing Overriding of CMakeLists.txt via CMakePresets.json:** Emphasize that settings in `CMakeLists.txt` can be superseded by configurations in `CMakePresets.json`. Ensure this capability is clearly documented for users to understand how to customize their build process.
* [ ] **Guide on Accessing and Utilizing CMakePresets.json Values:** Develop a section or a guide demonstrating how users can access and apply the values specified in `CMakePresets.json` to their projects.
* [ ] **Provide Comprehensive CMake Documentation:** Include in-depth documentation about CMake, focusing on its features, capabilities, and how it integrates into the project. This documentation should serve as a resource for both new and experienced users.
* [ ] **Instructions for Using Various Compilers:** Add a segment or instructions for incorporating and utilizing different compilers in the project. This section should guide users through the process of setting up and configuring the compilers as per their project needs.
