Test case for https://github.com/r-lib/later/pull/204

```r
remotes::install_github("r-lib/later")
remotes::install_github("jcheng5/laterfdtest")
laterfdtest:::testme()  # should no-op
remotes::install_version("later", "1.3.2")
```

Restart R, then run `laterfdtest:::testme()`. It should print an informative error asking you to upgrade later.
