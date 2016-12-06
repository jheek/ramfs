# ramfs


0) requirements (given for Debian)

```
sudo apt-get install -y build-essential git

git clone git@github.com:jheek/ramfs.git
cd ramfs
```


1) run make all in the src directory
```
make all
```

2) load the module
```
sudo insmod aufs.ko
```

3) make a directory for the mount and mount a disk of 64 mb
```
mkdir ramdisk
sudo mount -t ucrfs -o size=64m ucrfs ./ramdisk
```
