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

```
arduino-cli completion > _arduino-cli
```
Add it to the zsh config file
1. mkdir ~/completion_zsh
2. Add this at the begining of ~/.zshrc
```
fpath=($HOME/completion_zsh $fpath)
```
3. mv _arduino-cli ~/completion_zsh/ 
