# CppCon 2025 minimal example project

A C++ development environment using **Boost** libraries, configured with **CMake**, and managed with **Pixi**.

This example was created for a talk at CppCon 2025. 
Presentation can be found here:
https://docs.google.com/presentation/d/1WPbmhisuLrAJFT6x11dyYG5dL4rsn4WbwN_-Ykegb2A/edit?usp=sharing


## Highlights

- Configured with **CMake**
- CI setup with **GitHub Actions**
- Locked dependencies for reproducibility for **Windows**, **macOS**, and **Linux**
- Easy setup and usage with **Pixi** ([Learn more about Pixi](https://pixi.sh))
- The `pixi-build` workflow has been implemented in the [`source`](https://github.com/ruben-arts/cppcon2025-minimal-example/tree/source) branch of this repository.

## Getting Started

1. **Clone the repository:**
    ```sh
    git clone https://github.com/ruben-arts/cppcon2025-minimal-example
    cd cppcon2025-minimal-example
    ```

2. **Install Pixi:**
    Follow the instructions at [Pixi's docs](https://pixi.sh/latest/installation/).

3. **Install, Build and Run application:**
    ```
    pixi run test
    ```

## License

This project is licensed under the MIT License.