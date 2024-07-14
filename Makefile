all: ./ino_file/ino_file.ino
	cp ./main.c ./ino_file/ino_file.ino
	arduino-cli compile --build-property "build.extra_flags=-DELETE_LIBS" --fqbn arduino:avr:uno ./ino_file --output-dir ./out
