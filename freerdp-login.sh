#!/bin/sh

#echo "$(date) LOGIN" >> /tmp/log

# Turn off all connected monitors
for display in `xrandr -q | awk '/ connected / {print $1}'`
do
    xrandr --output "$display" --off 2>/dev/null
done

# Disable all input devices
for device in `xinput list |sed -n 's/^.*id=\([0-9]\+\).*$/\1/p'`
do
    xinput disable "$device" 2>/dev/null
done
