#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/seocoin.png
ICON_DST=../../src/qt/res/icons/seocoin.ico
convert ${ICON_SRC} -resize 16x16 seocoin-16.png
convert ${ICON_SRC} -resize 32x32 seocoin-32.png
convert ${ICON_SRC} -resize 48x48 seocoin-48.png
convert seocoin-16.png seocoin-32.png seocoin-48.png ${ICON_DST}

