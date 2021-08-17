#!/bin/bash

PATH=$1
CLASSNAME=$2
UCLASSNAME=$(printf "%s" "$2" | /usr/bin/tr '[:lower:]' '[:upper:]')

/usr/bin/head -2 Classnnn.hpp | /bin/sed "s/nnn/$UCLASSNAME/gi" > $PATH/Class$CLASSNAME.hpp
echo >> $PATH/Class$CLASSNAME.hpp 
/bin/grep -A100 'class' Classnnn.hpp | /bin/sed "s/nnn/$CLASSNAME/gi" >> $PATH/Class$CLASSNAME.hpp
/bin/cat Classnnn.cpp | /bin/sed "s/nnn/$CLASSNAME/gi" > $PATH/Class$CLASSNAME.cpp
