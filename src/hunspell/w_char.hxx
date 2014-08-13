#ifndef __WCHARHXX__
#define __WCHARHXX__

#ifndef GCC
typedef struct {
#else
typedef struct __attribute__ ((packed)) {
#endif
    unsigned char l;
    unsigned char h;
} w_char;


// two character arrays
struct replentry {
  char * pattern;
  char * pattern2;
  bool start;
  bool end;
};

#define w_char_is_point(a) (((a).l == '.') && ((a).h ==0))
#define w_char_eq(a,b) (((a).l == (b).l) && ((a).h == (b).h))
#endif
