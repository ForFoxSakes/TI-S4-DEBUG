# Gebruik een Gazebo base image
FROM gazebo:latest

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
    && rm -rf /var/lib/apt/lists/*

# Stel de werkdirectory in naar je src folder
WORKDIR /workspaces/TI-S4-VOS/src

CMD ["sleep", "infinity"]