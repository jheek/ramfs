mkdir ramdisk
mkdir ext4

sudo mount -t ucrfs -o size=64m ucrfs ./ramdisk

echo "timing of ucrfs"
time dd if=/dev/zero of=./ramdisk/test bs=1m count=256

sudo umount ./ranmdisk

echo "timing of ext4"
time dd if=/dev/zero of=./ext4/test bs=1m count=256

rm -f ./ext4/test


