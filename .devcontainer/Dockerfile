FROM ubuntu:noble

# Voorkom interactieve prompts tijdens installatie
ENV DEBIAN_FRONTEND=noninteractive

# Update het systeem en installeer basis build tools
RUN apt-get update && apt-get install -y \
    build-essential \
    cmake \
    gdb \
    git \
    gnupg2 \
    lsb-release \
    libtinyxml2.6.2v5 \
    libtinyxml2-dev \
    vim \
    clang \
    clang-format \
    clang-tidy \
    valgrind \
    curl \
    sudo \
    wget \
    libboost-all-dev \
    libprotobuf-dev \
    protobuf-compiler \
    libyaml-cpp-dev \
    pkg-config

# Installeer Gazebo afhankelijkheden en andere tools
RUN curl -fsSL https://packages.osrfoundation.org/gazebo.gpg -o /usr/share/keyrings/pkgs-osrf-archive-keyring.gpg
RUN echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/pkgs-osrf-archive-keyring.gpg] http://packages.osrfoundation.org/gazebo/ubuntu-stable $(lsb_release -cs) main" > /etc/apt/sources.list.d/gazebo-stable.list
RUN apt-get update && apt-get install -y gz-ionic

# Installeer de benodigde dependencies voor sdformat
RUN apt-get install -y \
    libtinyxml2-dev \
    libboost-dev \
    libboost-system-dev \
    libboost-filesystem-dev \
    libboost-program-options-dev




# Stel de werkdirectory in naar je src folder
WORKDIR /workspaces/TI-S4-VOS/src

CMD ["sleep", "infinity"]
