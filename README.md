# 64Doom
Source port of the original Doom to the Nintendo 64.<br><br>
This is a fork of the wonderful work by jnmartin84 with the intention to fix, update, and better document the code. I also plan to add new features and functionalities as I get a better understanding of the code.
## Building Your Own 64Doom ROM
Coming soon!
## Controls
- Move Forward (Analog Stick/D-Pad Up)
- Move Backward (Analog Stick/D-Pad Down)
- Turn Left (Analog Stick/D-Pad Left)
- Turn Right (Analog Stick/D-Pad Right)<br><br>
- Strafe Left (L Trigger)
- Strafe Right (R Trigger)<br><br>
- Toggle Run (Z Trigger)<br><br>
- Shoot (A Button)
- Use (B Button)<br><br>
- Toggle Map (C Up)
- ENTER Key (C Down)
- Previous Weapon (C Left)
- Next Weapon (C Right)<br><br>
- ESC Key (Start)<br><br>
- Toggle Debug Output and God Mode (L Trigger + R Trigger)
- Skip to Next Level (press L Trigger + Z Trigger 5 times in a row)
- Increase Gamma Correction (R Trigger + Z Trigger)
- View Startup Debug Text (hold Start while powering on the N64)
## Compiling Your Own 64Doom Binary
### Setting Up Your Dev Environment
#### Requirements
- Ubuntu 9.04 (32-bit) (http://old-releases.ubuntu.com/releases/9.04/ubuntu-9.04-desktop-i386.iso)
- A hypervisor (such as VirtualBox or VMWare Workstation) OR a legacy PC
- 64Doom source code (https://github.com/patrickmollohan/64doom/archive/master.zip)
#### Optional
- Legacy hypervisor guest drivers
  - VirtualBox Guest Additions 4.3.40 (https://download.virtualbox.org/virtualbox/4.3.40/VBoxGuestAdditions_4.3.40.iso)
  - "linuxPreGLibc25.iso" from VMware Tools 10.0.12 (https://my.vmware.com/web/vmware/details?downloadGroup=VMTOOLS10012&productId=491) (requires login)
#### Setup
1. Install Ubuntu 9.04 in a virtual machine (or on real hardware).
2. Fix "sources.list" to re-enable updates and software installation.<br>
   Run the following command in a terminal in your Ubuntu guest:
   ```
   sudo sed -i -re 's/([a-z]{2}\.)?archive.ubuntu.com|security.ubuntu.com/old-releases.ubuntu.com/g' /etc/apt/sources.list
   ```
3. Update Ubuntu.<br>
   Run the following command in a terminal in your Ubuntu guest:
   ```
   sudo apt-get update && sudo apt-get upgrade -y && sudo apt-get dist-upgrade -y && sudo apt-get autoremove -y && sudo apt-get clean
   ```
4. (Optional) Install guest drivers.<br>
   This step is optional, but recommended as it enables easier sharing of files between the host and guest operating systems.
5. Install libdragon dependencies.<br>
   Run the following command in a terminal in your Ubuntu guest:
   ```
   sudo apt-get install build-essential libmpc-dev libmpfr-dev texinfo
   ```
6. (Optional) Disable passwords on your account.<br>
   This step is optional, but is convenient so you don't have to monitor the progress of building the N64 toolchain for when it prompts for your password.<br>
   DO NOT DO THIS ON ANY DAILY DRIVER COMPUTER, OR ANY MACHINE THAT CONTAINS SENSITIVE DATA.<br>
   Run the following command in a terminal in your Ubuntu guest:
   ```
   sudo EDITOR=gedit visudo
   ```
   At the bottom of the text file, add the following line:
   ```
   {username} ALL=(ALL) NOPASSWD: ALL
   ```
   replacing {username} with your username. Hit save on the text file and close.<br>
   Verify the above step worked by running:
   ```
   sudo -k
   ```
   to invalidate the cached credentials and:
   ```
   sudo ls
   ```
   If you were not prompted for your sudo password, it worked!
7. Download 64Doom source code and transfer to your Ubuntu guest.<br>
   Ubuntu 9.04's OpenSSL is VERY outdated, as such, you won't be able to use git, wget, curl, etc. to download this code on the guest OS, nor will you be able to open GitHub in a web browser. You will have to download the source code on your host OS and find some way to transfer it to your guest OS.<br>
   If you installed the guest drivers for your hypervisor in step 4, you should be able to either drag & drop the files to the guest OS or set up a shared folder between the host and guest. Alternately, you could create an ISO containing the files using a program such as MagicISO and then mount it as a virtual disc. You could upload the source code to somewhere that allows you to connect via HTTP, or you could put the files on a thumb drive and connect the drive to your guest OS. There are multiple ways to go about this; do whatever's convenient.
8. Extract the 64Doom code to your home directory.<br>
   It is important you place the extracted "64doom" folder in your home directory, as the 64Doom makefile expects it to be there. If you want to put the "64doom" folder elsewhere, make sure to update the "DOOMDIR" variable in the makefile in "64doom/src" to reflect the new location.
9. Open a terminal and build the N64 toolchain.<br>
   Change directory to the libdragon tools folder in your 64Doom directory:
   ```
   cd ~/64doom/libdragon/tools
   ```
   and run the build script:
   ```
   ./build
   ```
   If you disabled your password as instructed in step 6, take a nap. If not, make a pot of coffee. Down it. Stare at the screen in anticipation of several password prompt. Alternately, regret the time wasted when you decide to walk away and the password prompt times out, forcing you to start this step over.
10. Edit your .bashrc file.<br>
    Run the following command in a terminal:
    ```
    gedit ~/.bashrc
    ```
    At the bottom of your .bashrc file, add the following line:
    ```
    export N64_INST=/usr/mips64-elf
    ```
11. Compile libdragon and n64memory.<br>
    Go to the "64doom/n64memory/include" directory and copy any header files into the "64doom/libdragon/include" directory and vice versa.<br>
    From a terminal:
    ```
    cd ~/64doom
    cp ./n64memory/include/*.h ./libdragon/include/
    cp ./libdragon/include/*.h ./n64memory/include/
    ```
    Now for compiling libdragon.
    ```
    cd ./libdragon
    make
    ```
    Once completed, compile n64memory.
    ```
    cd ../n64memory
    make
    ```
12. Compile n64tool and chksum64.<br>
    From a terminal:
    ```
    cd ~/64doom/libdragon/tools
    gcc ./n64tool.c -o ./n64tool
    gcc ./chksum64.c -o ./chksum64
    ```
13. Copy all compiled files to their appropriate locations.<br>
    From a terminal:
    ```
    cd ~/64doom
    sudo cp ./libdragon/*.a /usr/mips64-elf/mips64-elf/lib
    sudo cp ./libdragon/*.x /usr/mips64-elf/mips64-elf/lib
    sudo cp ./libdragon/tools/chksum64 /usr/mips64-elf/bin
    sudo cp ./libdragon/tools/n64tool /usr/mips64-elf/bin
    sudo cp ./n64memory/*.a /usr/mips64-elf/mips64-elf/lib
    sudo cp ./tools/header /usr/mips64-elf/lib
    ```
    And fix permissions:
    ```
    sudo chmod -R 777 /usr/mips64-elf
    ```
    Congrats, you now have a working 64Doom development environment!
14. (Optional) Take a snapshot of your virtual machine.
    This is a great time to take a snapshot of your virtual machine in case something goes wrong. You wouldn't want to redo all of the above steps, do you? Oh wait, I forgot, there are masochists in the crowd.
### Compiling
After you have a working 64Doom dev environment, you are now ready to start compiling your own 64Doom binary file. In a terminal, change to the "~/64doom/src" directory and compile:
```
cd ~/64doom/src
make clean all
```
If all went well, you'll end up with files "doom.bin", "doom.elf", and "doom.z64". You can copy the "doom.bin" file into your 64Doom_Builder directory and make your own custom 64Doom ROMs!
## FAQ
Q: Does this work on real hardware?<br>
A: Aye! Or at least it should. I don't have an Everdrive/flash cart to test it myself, but there are videos showing jnmartin84's build running on real hardware.<br><br>
Q: Does this work in an emulator?<br>
A: Some. The only emulators I am aware of that it works with is MAME/MESS and cen64.<br><br>
Q: Why doesn't it work with {specific emulator}?<br>
A: 64Doom relies on libdragon, an open source N64 development library. Unfortunately, libdragon only works on real hardware or emulators that properly emulate the RCP.
## Credits
- id Software (Doom)<br>
- jnmartin84 (64Doom)<br>
- DragonMinded (libdragon)
