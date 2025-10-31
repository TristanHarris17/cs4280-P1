#ifndef SCANNER_H
#define SCANNER_H

#include <string>
#include <vector>
#include "token.h"

// Initialize the scanner with an input filename. This will tokenize the file
// and populate an internal vector of tokens.
void initScanner(std::istream &in);

// Return next token and remove it from the internal vector. If EOF reached,
// returns an EOF token.
Token scanner();

// Test driver that repeatedly calls scanner() and prints tokens until EOF.
void testScanner(std::istream &in);

#endif // SCANNER_H
