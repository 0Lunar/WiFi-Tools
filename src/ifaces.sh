ifconfig -a | sed 's/[ \t].*//;/^$/d' | tr -d ':' > .iface.tmp
