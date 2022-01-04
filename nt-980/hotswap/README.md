# Description

This forks the nt-980 to account for the following layouts.  It combines Kailh hotswap sockets and though holes for switches where hotswaps wouldn't work.  This is admittedly a bit weird but what I wanted to make.

It uses the same firmware as the nt-980 as no switches were added or removed.

## Changes from nt-980
* Bottom row alternate layouts
* Stepped caps lock support
* Rotated numpad plus and enter keys
* Added alternate LED location under numlock key
* Added reset pins under the delete key (to go into bootloader mode)
* Added second JST connector (JST 2.0 5 pin)
* Converted most keys to Kailh hotswap
* Labeling on front and back (trying something)

It does work with the stock plate but only for the original layout.  Other layouts would require modding the plate or getting a new one.

## NOTE: 
* **The JST connector uses a different PIN arrangement then the original Leopold daughter/middle board pay attention to the cable used if going for this connection method!**
* I didn't update the Schematic for the changes made because I have no idea on how to do that and everytime I tried it caused more problems

![PCB](https://i.imgur.com/qRTXp2R.png)

## Layouts supported (keys in red are solder through holes rest are Kailh hotswap sockets)
![Layouts](https://i.imgur.com/V9WHENf.png)

More photos here: https://imgur.com/a/jotWOC0

Use at your own risk.
