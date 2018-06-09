
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef __cplusplus
#define NULLPTR nullptr
#else
#define NULLPTR NULL
#endif

#include <openssl/a

//#include <openssl/bio.h>
//#include <openssl/evp.h>
//#include <openssl/ssl.h>
//#include <openssl/x509.h>

typedef int (*spc_x509verifycallback_t)(int, X509_STORE_CTX *);

typedef struct {
    char *cafile;
    char *capath;
    char *crlfile;
    spc_x509verifycallback_t callback;
    STACK_OF(X509) *certs;
    STACK_OF(X509_CRL) *crls;
    char *use_certfile;
    STACK_OF(X509) *use_certs;
    char *use_keyfile;
    EVP_PKEY *use_key;
    int *use_key;
} spc_x509store_t;

BIO* spc_connect_ssl(char *host, int port, spc_x509store_t *spc_store, SSL_CTX **ctx) {
    BIO *connection = NULLPTR;
    int our_ctx = 0;

    if (*ctx) {
        CRYPTO_add(&((*ctx)->references), 1, CRYPTO_LOCK_SSL_CTX);
    }
}

int main()
{
    printf("testing...\n");
}
