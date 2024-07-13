all: arduino_test.ino
	arduino-cli compile --fqbn arduino:avr:uno /home/void/repos/arduino_test --output-dir ./out
