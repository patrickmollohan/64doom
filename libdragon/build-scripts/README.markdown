Usage
=====

### Requirements
 - POSIX Bourne shell
 - Wget
 - bzip2
 - Texinfo
 - ncurses
 - Time and especially patience

### Installation
  If all requirements are met, as a _normal_ user and under the root of the `build-scripts/` directory, perform the following to build the cross compiler

    cp -v config{.in,}

In the `config` you just copied, change the appropriate fields.

    emacs config

If you haven't already installed the dependencies:

    # Debian/Ubuntu
    sudo apt-get install wget \
    bzip2 \
    build-essentials \
    libncurses5-dev \
    texinfo

    # Fedora/CentOS
    sudo yum install gmp-devel mpfr-devel libmpc-devel ncurses-devel texi2html texinfo

Before you begin building the tool-chain, be sure to double-check your changes in `config`. Otherwise,

    ./build-compiler

After a successful build, go to root directory and modify `yaul.env`

### Errors

   Be sure to check out the log files in the `${BUILD_SRC_DIR}/` directory.
