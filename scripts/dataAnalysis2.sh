#!/bin/bash

cat data/values* | sed 's/\s/\n/g' | sed '/^$/d' | sort -n | (head -n1 && tail -n1)