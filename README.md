# ENet
## Description (from website)
ENet's purpose is to provide a relatively thin, simple and robust network communication layer on top of UDP (User Datagram Protocol).The primary feature it provides is optional reliable, in-order delivery of packets.

ENet omits certain higher level networking features such as authentication, lobbying, server discovery, encryption, or other similar tasks that are particularly application specific so that the library remains flexible, portable, and easily embeddable.

## Building
Run either premake or cmake to generate for your build system of choice and build.

## Usage
See the tutorial at http://enet.bespin.org/Tutorial.html

# Original Github Readme
Please visit the ENet homepage at http://enet.bespin.org for installation
and usage instructions.

If you obtained this package from github, the quick description on how to build
is:

# Generate the build system.

autoreconf -vfi

# Compile and install the library.

./configure && make && make install
