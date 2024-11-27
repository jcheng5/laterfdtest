#include <later_api.h>

void callback(int *fds, void *data)
{
}

// [[Rcpp::export]]
void testme()
{
    later::later_fd(callback, NULL, 0, NULL, 0, 0);
}