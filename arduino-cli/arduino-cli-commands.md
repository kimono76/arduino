arduino-cli core list
arduino-cli board list
arduino-cli core install arduino:avr
arduino-cli sketch new Blink
arduino-cli board attach serial:///dev/ttyACM0 -v
arduino-cli compile
arduino-cli upload -v
arduino-cli compile --upload
