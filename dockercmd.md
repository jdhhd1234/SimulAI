# docker run --rm -it -v "$PWD":/app -w /app ubuntu:24.04 bash
## apt update
## apt install -y build-essential cmake ninja-build python3 python3-pip lua5.4 liblua5.4-dev
## cmake -S . -B build -G Ninja
## cmake --build build



# docker build -t simulai . (in project root)
## docker run --rm simulai (run)