#!/bin/bash
wget url -O /tmp/101-libfake.so
export LD_PRELOAD=/tmp/101-libfake.so
