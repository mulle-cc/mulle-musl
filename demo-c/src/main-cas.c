// #include <mulle-thread/mulle-thread.h>
//
//
// int  main( int argc, char *argv[])
// {
//    mulle_atomic_pointer_t    value = 0;
//
//    _mulle_atomic_pointer_compare_and_swap( &value, (void *) 1848, (void *) 0);
//    return( 0);
// }
//

//#include <stdatomic.h>
//
//typedef _Atomic( void *)   mulle_atomic_pointer_t;
//
//static inline void  *
//   __mulle_atomic_pointer_cas( mulle_atomic_pointer_t *address,
//                               void *value,
//                               void *expect)
//{
//   void    *actual;
//
//   actual = expect;
//   atomic_compare_exchange_strong_explicit( address,
//                                            &actual,
//                                            value,
//                                            memory_order_relaxed,
//                                            memory_order_relaxed);
//
//   return( actual);
//}
#include <stdio.h>

int  main( int argc, char *argv[])
{
   _Atomic( void *)   storage;
//  mulle_atomic_pointer_t   storage;
//  void                     *expected_actual;
//  void                     *value;
//  int                      result;

//  storage         = (void *) 0;
//  expected_actual = (void *) 11;
//  value           = (void *) 1848;

   fprintf( stderr, "start\n");
//   __mulle_atomic_pointer_cas( &storage, expected_actual, value);

   fprintf( stderr, "end %p\n", &storage);
   return( 0);
}
