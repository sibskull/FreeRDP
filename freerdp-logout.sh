#!/bin/sh

#echo "$(date) LOGOUT" >> /tmp/log

# Turn on all connected monitors
for display in `xrandr -q | awk '/ connected / {print $1}'`
do
    xrandr --output "$display" --auto 2>/dev/null
done

# Enable all input devices
for device in `xinput list |sed -n 's/^.*id=\([0-9]\+\).*$/\1/p'`
do
    xinput enable "$device" 2>/dev/null
done
