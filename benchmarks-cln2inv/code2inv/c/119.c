int main() {
  // variable declarations
  int i;
  int size;
  int sn;
  // pre-conditions
  (sn = 0);
  (i = 1);
  assume(size >= 1);
  // loop body
  while ((i <= size)) {
    {
    (i  = (i + 1));
    (sn  = (sn + 1));
    }

  }
  // post-condition
if ( (sn != 0) )
assert( (sn == size) );

}
