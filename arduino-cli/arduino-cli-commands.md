# BASIC COMMANDS

arduino-cli core list
arduino-cli board list
arduino-cli core install arduino:avr
arduino-cli sketch new Blink
arduino-cli board attach serial:///dev/ttyACM0 -v
arduino-cli compile
arduino-cli upload -v
arduino-cli compile --upload

## COMMAND LINE COMPLETION

```sh
arduino-cli completion zsh > _arduino-cli
```

Add it to the zsh config file

1. mkdir ~/completion_zsh
1. Add this at the begining of ~/.zshrc  

```sh

fpath=($HOME/completion_zsh $fpath) 


```sh
1. mv _arduino-cli ~/completion_zsh/ 

```

## Access the serial monitor   

```

lsusb
ls /dev/tty*
sudo stty -F /dev/ttyACM0 speed 9600
cat /dev/ttyACM0
^C for stop
touch log_30seconds.txt
cat /dev/ttyACM0 > ./log_30seconds.txt

```
## Print rto serial monitor  

```sh
echo "insert text" > /dev/ttyACM0 


```

