
Debian
====================
This directory contains files used to package refshared/refshare-qt
for Debian-based Linux systems. If you compile refshared/refshare-qt yourself, there are some useful files here.

## refshare: URI support ##


refshare-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install refshare-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your refshareqt binary to `/usr/bin`
and the `../../share/pixmaps/refshare128.png` to `/usr/share/pixmaps`

refshare-qt.protocol (KDE)

