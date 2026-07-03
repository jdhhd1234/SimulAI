FROM ubuntu:24.04

RUN apt update && apt install -y \
    build-essential \
    cmake \
    ninja-build \
    git \
    python3 \
    python3-dev \
    wayland-protocols \
    libwayland-dev \
    libxkbcommon-dev \
    xorg-dev \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /app

COPY . .

RUN cmake -S . -B build -G Ninja
RUN cmake --build build

CMD ["./build/SimulAI"]