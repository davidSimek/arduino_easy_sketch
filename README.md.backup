# Arduino UNO Void-Linux template
(you can easily adapt this to any other distribution, if you know what you are doing)

## goal
### TL;DR
Make your lsp understand arduino code like if it was raw c by including necessary libraries into systemwide c include path. Then use c flags to delete unnecessary includes, so it can be compiled using arduino-cli.
### Long text
As you may know, you can write, compile and upload arduino code in arduino gui app. Some people prefer it, I don't. This is for people who like to use vim/neovim or any other editor with lsp support.

You can edit your code in your favourite editor already, but you have to use `.ino` file. It doesn't let your lsp understand it is c code. Even if you make it understand it, it has to know definitions, or linter will go crazy. Also code completion will not work.

So this project helps you install all necessary libraries, your lsp has to know, so it can help you. It also shows you how to make lsp recognize their location using global system variable `C_INCLUDE_PATH`.

# How I test

To test this setup, I use [SimulIDE](https://simulide.com). It is very usefull application allowing you to simulate circuitery and programming micro-controllers (Including Arduino UNO).


### add paths for c for your shell_rc (.bashrc/.config/fish/config.fish)
```bash
export C_INCLUDE_PATH=/usr/avr/include:/home/void/.arduino15/packages/arduino/hardware/avr/1.8.6/cores/arduino:/home/void/.arduino15/packages/arduino/hardware/avr/1.8.6/variants/standard
```

### packages for xbps (you will probably find equivalent in apt/aur or whatever you use)
1.  avr-libc
2.  avr-binutils
3.  arduino-cli
