all: ./ino_file/ino_file.ino
	cp ./main.c ./ino_file/ino_file.ino
	arduino-cli compile --fqbn arduino:avr:uno /home/void/repos/arduino_test/ino_file --output-dir ./out
