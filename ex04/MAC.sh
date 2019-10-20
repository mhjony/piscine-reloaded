#!/usr/bin/env bash
ifconfig -a | grep -ioE '([a-z0-9]{2}:){5}..'
