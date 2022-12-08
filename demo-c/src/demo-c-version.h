#ifndef demo_c_version_h__
#define demo_c_version_h__

/*
 *  You can maintain this file with `mulle-project-version`
 *  version:  major, minor, patch
 */
#define DEMO_OBJC_VERSION  ((0 << 20) | (7 << 8) | 56)


static inline unsigned int   demo_c_get_version_major( void)
{
   return( DEMO_OBJC_VERSION >> 20);
}


static inline unsigned int   demo_c_get_version_minor( void)
{
   return( (DEMO_OBJC_VERSION >> 8) & 0xFFF);
}


static inline unsigned int   demo_c_get_version_patch( void)
{
   return( DEMO_OBJC_VERSION & 0xFF);
}

#endif


/*
 * extension : mulle-objc/objc-demo
 * directory : demo/executable
 * template  : .../PROJECT_NAME-version.h
 * Suppress this comment with `export MULLE_SDE_GENERATE_FILE_COMMENTS=NO`
 */
