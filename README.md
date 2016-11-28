# ramfs

1) run make all in the src directory
`
make all
`

2) 
`
sudo insmod aufs.ko
`

3) 
`
mkdir ramdisk
sudo mount -t ucrfs -o size=64m ucrfs ./ramdisk
`
