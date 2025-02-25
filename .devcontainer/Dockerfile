# Gebruik een Gazebo base image
FROM ubuntu:20.04

# Voorkom interactieve prompts tijdens installatie
ENV DEBIAN_FRONTEND=noninteractive

# Update het systeem en installeer basis build tools
RUN apt-get update && apt-get install -y \
    build-essential \
    cmake \
    gdb \
    git \
    vim \
    clang \
    clang-format \
    clang-tidy \
    valgrind \
    libgazebo11-dev \
    libeigen3-dev \
    libprotobuf-dev \
    protobuf-compiler \
    libprotoc-dev \
    python3-pip \
    && rm -rf /var/lib/apt/lists/*

# Voeg de Gazebo repository toe
RUN curl https://packages.osrfoundation.org/gazebo.gpg --output /usr/share/keyrings/pkgs-osrf-archive-keyring.gpg
RUN echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/pkgs-osrf-archive-keyring.gpg] http://packages.osrfoundation.org/gazebo/ubuntu-stable $(lsb_release -cs) main" | tee /etc/apt/sources.list.d/gazebo-stable.list > /dev/null
RUN apt-get update && apt-get install -y gazebo11

# Stel de werkdirectory in naar je src folder
WORKDIR /workspaces/TI-S4-VOS/src

CMD ["sleep", "infinity"]