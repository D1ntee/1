#! /bin/sh

ifconfig | grep -Eo ..\(\:..\){5}
