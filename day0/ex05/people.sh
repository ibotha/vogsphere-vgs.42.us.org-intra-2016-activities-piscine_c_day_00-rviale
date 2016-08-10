#!/bin/sh
ldapsearch -Q -ALL "(uid=z*)" | grep cn: | cut -c5- | sort -r