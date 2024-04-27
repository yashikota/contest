#!/bin/bash

if [ $# -ne 1 ]; then
  echo "Usage: $0 xxx" 1>&2
  exit 1
fi

if [ ! -e abc ]; then
  echo "Error: directory 'abc' not exists." 1>&2
  exit 1
fi

mkdir -p abc/$1

cp --update=none Makefile abc/$1/Makefile

cp --update=none template.cpp abc/$1/a.cpp
cp --update=none template.cpp abc/$1/b.cpp
cp --update=none template.cpp abc/$1/c.cpp
cp --update=none template.cpp abc/$1/d.cpp
# cp --update=none template.cpp abc/$1/e.cpp
# cp --update=none template.cpp abc/$1/f.cpp
# cp --update=none template.cpp abc/$1/g.cpp
# cp --update=none template.cpp abc/$1/h.cpp

exit 0
