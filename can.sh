ifconfig can0 down
echo 250000 > /sys/devices/platform/FlexCAN.0/bitrate
cat /sys/devices/platform/FlexCAN.0/bitrate
ifconfig can0 up
