mkdir ramdisk
mkdir ext4

sudo mount -t ucrfs -o size=64m ucrfs ./ramdisk

echo "timing of ucrfs"
sudo dd if=/dev/zero of=./ramdisk/test bs=1M count=256

sudo umount ./ramdisk

echo "timing of ext4"
sudo dd if=/dev/zero of=./ext4/test bs=1M count=256

rm -f ./ext4/test


