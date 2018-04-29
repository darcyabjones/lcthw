#!/usr/bin/env sh

gdb --batch --ex run --ex bt --ex q --args $1
