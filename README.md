# DataViz++
## A Data Visualization Tool in C++ with SDL

Welcome to the Data Visualization Tool project! This tool is developed in C++ using the Simple DirectMedia Layer (SDL) library and is designed to plot simple continuous and stem plots. 

## Features

- **Continuous Plots:** Visualize continuous data with line graphs.
- **Stem Plots:** Display discrete data with stems and markers.

## Getting Started

### Prerequisites

To build and run this project, you'll need the following:

- C++ compiler (e.g., g++, clang++)
- SDL2 library
- CMake (optional, for build configuration)

### Installation

1. **Clone the repository:**

   ```bash
   git clone https://github.com/yourusername/your-repository.git
   cd your-repository
   ```

2. **Install SDL2:**

   - On macOS, you can use Homebrew:

     ```bash
     brew install sdl2
     ```

   - On Linux, you can use your package manager. For example, on Ubuntu:

     ```bash
     sudo apt-get install libsdl2-dev
     ```

3. **Build the project:**

   If you're using CMake:

   ```bash
   mkdir build
   make
   ```

   Alternatively, you can compile using g++:

   ```bash
   g++ -o data_visualization_tool main.cpp -lSDL2
   ```

### Usage

1. **Run the executable:**

   ```bash
   make run
   ```

2. **Provide data input:**

   - Currently enter the data in defenitions.h as in testing stage.


### Contributing

If you'd like to contribute to the project, please follow these steps:

1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Commit your changes (`git commit -am 'Add new feature'`).
4. Push to the branch (`git push origin feature-branch`).
5. Create a new Pull Request.

### License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

--- 
### Acknowledgements

- [SDL2](https://www.libsdl.org/) for the graphics library.
- Inspiration and support from the open-source community.

--- 

