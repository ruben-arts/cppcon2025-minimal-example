# CPPCon minimal example monorepo

A workspace with a minimal example of a monorepo containing a C++ package and a Python package.

## Highlights

- Configured with **CMake**
- CI setup with **GitHub Actions**
- Locked dependencies for reproducibility for **Windows**, **macOS**, and **Linux**
- Easy setup and usage with **Pixi** ([Learn more about Pixi](https://pixi.sh))
- Using the `pixi-build` feature for building C++ and Python packages
- Minimal example of a C++ package and a Python package in a monorepo

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
    # Run Pixi installed C++ application
    pixi run cpp
    # Run Pixi installed Python application
    pixi run py
    ```

## License

This project is licensed under the MIT License.