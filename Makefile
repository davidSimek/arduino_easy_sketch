all: ./ino_file/ino_file.ino
	cp ./src/* ./ino_file/
	mv ./ino_file/main.cpp ./ino_file/ino_file.ino
	export CPLUS_INCLUDE_PATH="" && \
	arduino-cli compile --build-property "build.extra_flags=-DELETE_LIBS" --fqbn arduino:avr:uno ./ino_file --output-dir ./out
clean:
	echo "Cleaning up..."
	rm ./out/*
