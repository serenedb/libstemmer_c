# libstemmer_c

Generated C distribution of the [Snowball](https://github.com/snowballstem/snowball)
stemming algorithms, consumed by [SereneDB](https://github.com/serenedb/serenedb)
as the `third_party/libstemmer_c` submodule.

This repository holds build output, not hand-written source. Each commit is the
unmodified result of `make dist_libstemmer_c` against a pinned snowball commit,
recorded in the commit message. `README` (no extension) is upstream's own
document and describes the distribution itself.

Do not edit these files. To pick up upstream changes, run
`scripts/update_libstemmer.sh` in the serenedb repository and push the result
here.
