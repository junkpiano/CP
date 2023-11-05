#!/bin/sh

SCRIPT_DIR=$(cd $(dirname $0); pwd)

DIR=$1
shift

mkdir -p $SCRIPT_DIR/../$DIR
mv *.cpp $SCRIPT_DIR/../$DIR

